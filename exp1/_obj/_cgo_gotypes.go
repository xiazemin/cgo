// Created by cgo - DO NOT EDIT

package main

import "unsafe"

import _ "runtime/cgo"

import "syscall"

var _ syscall.Errno
func _Cgo_ptr(ptr unsafe.Pointer) unsafe.Pointer { return ptr }

//go:linkname _Cgo_always_false runtime.cgoAlwaysFalse
var _Cgo_always_false bool
//go:linkname _Cgo_use runtime.cgoUse
func _Cgo_use(interface{})
type _Ctype_int int32

type _Ctype_int32_t _Ctype_int

type _Ctype_void [0]byte

//go:linkname _cgo_runtime_cgocall runtime.cgocall
func _cgo_runtime_cgocall(unsafe.Pointer, uintptr) int32

//go:linkname _cgo_runtime_cgocallback runtime.cgocallback
func _cgo_runtime_cgocallback(unsafe.Pointer, unsafe.Pointer, uintptr, uintptr)

//go:linkname _cgoCheckPointer runtime.cgoCheckPointer
func _cgoCheckPointer(interface{}, ...interface{})

//go:linkname _cgoCheckResult runtime.cgoCheckResult
func _cgoCheckResult(interface{})

//go:cgo_import_static _cgo_3a42ad434848_Cfunc_add
//go:linkname __cgofn__cgo_3a42ad434848_Cfunc_add _cgo_3a42ad434848_Cfunc_add
var __cgofn__cgo_3a42ad434848_Cfunc_add byte
var _cgo_3a42ad434848_Cfunc_add = unsafe.Pointer(&__cgofn__cgo_3a42ad434848_Cfunc_add)

//go:cgo_unsafe_args
func _Cfunc_add(p0 _Ctype_int32_t, p1 _Ctype_int32_t) (r1 _Ctype_int32_t) {
	_cgo_runtime_cgocall(_cgo_3a42ad434848_Cfunc_add, uintptr(unsafe.Pointer(&p0)))
	if _Cgo_always_false {
		_Cgo_use(p0)
		_Cgo_use(p1)
	}
	return
}
