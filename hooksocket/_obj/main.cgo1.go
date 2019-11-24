// Created by cgo - DO NOT EDIT

//line /Users/didi/goLang/src/github.com/xiazemin/cgo/hooksocket/main.go:1
package main

//line /Users/didi/goLang/src/github.com/xiazemin/cgo/hooksocket/main.go:8
import (
	"fmt"
	"syscall"
)

func init() {
	_Cfunc_libc_hook_init()
}

//line /Users/didi/goLang/src/github.com/xiazemin/cgo/hooksocket/main.go:18
func socket(domain _Ctype_int, type_ _Ctype_int, protocol _Ctype_int) _Ctype_int {
	fmt.Println(fmt.Sprintf("open socket from thread id: %v", syscall.Gettid()))
	return _Cfunc_orig_socket(domain, type_, protocol)
}

func main() {
}
