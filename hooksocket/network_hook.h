#ifndef __DLSYM_WRAPPER_H__
#define __DLSYM_WRAPPER_H__

void libc_hook_init();
int orig_socket(int, int, int);

#endif