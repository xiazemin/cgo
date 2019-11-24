// 再来个演示代码：

// 编译
// cc -dynamiclib main.c -o libHook.dylib -Wall
// 强行注入ls测试
// DYLD_INSERT_LIBRARIES=libHook.dylib ls
#include <malloc/malloc.h>

#define DYLD_INTERPOSE(_replacement,_replacee) \
__attribute__((used)) static struct{ const void* replacement; const void* replacee; } _interpose_##_replacee \
__attribute__ ((section ("__DATA,__interpose"))) = { (const void*)(unsigned long)&_replacement, (const void*)(unsigned long)&_replacee };


void *hacked_malloc(size_t size){
    void *ret = malloc(size);

    malloc_printf("+ %p %d\n", ret, size);
    return ret;
}

void hacked_free(void *freed){
    malloc_printf("- %p\n", freed);
    free(freed);
}

DYLD_INTERPOSE(hacked_malloc, malloc)
DYLD_INTERPOSE(hacked_free, free);

