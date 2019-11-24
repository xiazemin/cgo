//  演示代码
// #import <mach-o/dyld-interposing.h>
// from dyld-interposing.h
#include <stdio.h>
#define DYLD_INTERPOSE(_replacement,_replacee) __attribute__((used)) static struct{ const void* replacement; const void* replacee; } _interpose_##_replacee __attribute__ ((section ("__DATA,__interpose"))) = { (const void*)(unsigned long)&_replacement, (const void*)(unsigned long)&_replacee };

ssize_t hacked_write(int fildes, const void *buf, size_t nbyte)
{
    printf("[++++]into hacked_write－－－by piaoyun");
    return write(fildes, buf, nbyte);
}

DYLD_INTERPOSE(hacked_write, write);



