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
type _Ctype_void [0]byte

//go:linkname _cgo_runtime_cgocall runtime.cgocall
func _cgo_runtime_cgocall(unsafe.Pointer, uintptr) int32

//go:linkname _cgo_runtime_cgocallback runtime.cgocallback
func _cgo_runtime_cgocallback(unsafe.Pointer, unsafe.Pointer, uintptr, uintptr)

//go:linkname _cgoCheckPointer runtime.cgoCheckPointer
func _cgoCheckPointer(interface{}, ...interface{})

//go:linkname _cgoCheckResult runtime.cgoCheckResult
func _cgoCheckResult(interface{})

//go:cgo_import_static _cgo_08fe65c330fa_Cfunc_ACFunction
//go:linkname __cgofn__cgo_08fe65c330fa_Cfunc_ACFunction _cgo_08fe65c330fa_Cfunc_ACFunction
var __cgofn__cgo_08fe65c330fa_Cfunc_ACFunction byte
var _cgo_08fe65c330fa_Cfunc_ACFunction = unsafe.Pointer(&__cgofn__cgo_08fe65c330fa_Cfunc_ACFunction)

//go:cgo_unsafe_args
func _Cfunc_ACFunction() (r1 _Ctype_void) {
	_cgo_runtime_cgocall(_cgo_08fe65c330fa_Cfunc_ACFunction, uintptr(unsafe.Pointer(&r1)))
	if _Cgo_always_false {
	}
	return
}
//go:cgo_export_dynamic AGoFunction
//go:linkname _cgoexp_08fe65c330fa_AGoFunction _cgoexp_08fe65c330fa_AGoFunction
//go:cgo_export_static _cgoexp_08fe65c330fa_AGoFunction
//go:nosplit
//go:norace
func _cgoexp_08fe65c330fa_AGoFunction(a unsafe.Pointer, n int32, ctxt uintptr) {
	fn := _cgoexpwrap_08fe65c330fa_AGoFunction
	_cgo_runtime_cgocallback(**(**unsafe.Pointer)(unsafe.Pointer(&fn)), a, uintptr(n), ctxt);
}

func _cgoexpwrap_08fe65c330fa_AGoFunction() {
	AGoFunction()
}
