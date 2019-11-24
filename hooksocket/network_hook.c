#include <dlfcn.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <netdb.h>
#include <math.h>
#include "network_hook.h"
#include "_cgo_export.h"

#define RTLD_NEXT	((void *) -1l)

#define HOOK_SYS_FUNC(name) if( !orig_##name##_func ) { orig_##name##_func = (name##_pfn_t)dlsym(RTLD_NEXT,#name); }

typedef int (*socket_pfn_t)(int, int, int);
static socket_pfn_t orig_socket_func;

void libc_hook_init() {
    HOOK_SYS_FUNC( socket );
}

int orig_socket(int domain, int type, int protocol) {
    return orig_socket_func(domain, type, protocol);
}