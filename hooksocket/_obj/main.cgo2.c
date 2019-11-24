#line 3 "/Users/didi/goLang/src/github.com/xiazemin/cgo/hooksocket/main.go"

 #include <stddef.h>
 #include <netinet/in.h>
 #include "network_hook.h"

#line 1 "cgo-generated-wrapper"


#line 1 "cgo-gcc-prolog"
/*
  If x and y are not equal, the type will be invalid
  (have a negative array count) and an inscrutable error will come
  out of the compiler and hopefully mention "name".
*/
#define __cgo_compile_assert_eq(x, y, name) typedef char name[(x-y)*(x-y)*-2+1];

/* Check at compile time that the sizes we use match our expectations. */
#define __cgo_size_assert(t, n) __cgo_compile_assert_eq(sizeof(t), n, _cgo_sizeof_##t##_is_not_##n)

__cgo_size_assert(char, 1)
__cgo_size_assert(short, 2)
__cgo_size_assert(int, 4)
typedef long long __cgo_long_long;
__cgo_size_assert(__cgo_long_long, 8)
__cgo_size_assert(float, 4)
__cgo_size_assert(double, 8)

extern char* _cgo_topofstack(void);

#include <errno.h>
#include <string.h>


#define CGO_NO_SANITIZE_THREAD
#define _cgo_tsan_acquire()
#define _cgo_tsan_release()

CGO_NO_SANITIZE_THREAD
void
_cgo_579131595ff2_Cfunc_libc_hook_init(void *v)
{
	struct {
		char unused;
	} __attribute__((__packed__)) *a = v;
	_cgo_tsan_acquire();
	libc_hook_init();
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_579131595ff2_Cfunc_orig_socket(void *v)
{
	struct {
		int p0;
		int p1;
		int p2;
		char __pad12[4];
		int r;
		char __pad20[4];
	} __attribute__((__packed__)) *a = v;
	char *stktop = _cgo_topofstack();
	__typeof__(a->r) r;
	_cgo_tsan_acquire();
	r = orig_socket(a->p0, a->p1, a->p2);
	_cgo_tsan_release();
	a = (void*)((char*)a + (_cgo_topofstack() - stktop));
	a->r = r;
}

