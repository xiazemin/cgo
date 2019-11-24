// Created by cgo - DO NOT EDIT

//line /Users/didi/goLang/src/github.com/xiazemin/cgo/exp1/main.go:1
package main

//line /Users/didi/goLang/src/github.com/xiazemin/cgo/exp1/main.go:11
import "fmt"

func main() {
	var a, b int32 = 1, 2
	var c int32 = int32(_Cfunc_add(_Ctype_int32_t(a), _Ctype_int32_t(b)))
	fmt.Println(c)
}
