/* Created by cgo - DO NOT EDIT. */
#include <stdlib.h>
#include "_cgo_export.h"

extern void crosscall2(void (*fn)(void *, int, __SIZE_TYPE__), void *, int, __SIZE_TYPE__);
extern __SIZE_TYPE__ _cgo_wait_runtime_init_done();
extern void _cgo_release_context(__SIZE_TYPE__);

extern char* _cgo_topofstack(void);
#define CGO_NO_SANITIZE_THREAD
#define _cgo_tsan_acquire()
#define _cgo_tsan_release()

extern void _cgoexp_579131595ff2_socket(void *, int, __SIZE_TYPE__);

CGO_NO_SANITIZE_THREAD
int socket(int p0, int p1, int p2)
{
	__SIZE_TYPE__ _cgo_ctxt = _cgo_wait_runtime_init_done();
	struct {
		int p0;
		int p1;
		int p2;
		char __pad0[4];
		int r0;
		char __pad1[4];
	} __attribute__((__packed__)) a;
	a.p0 = p0;
	a.p1 = p1;
	a.p2 = p2;
	_cgo_tsan_release();
	crosscall2(_cgoexp_579131595ff2_socket, &a, 24, _cgo_ctxt);
	_cgo_tsan_acquire();
	_cgo_release_context(_cgo_ctxt);
	return a.r0;
}
