package main

// #cgo LDFLAGS: -ldl
// #include <stddef.h>
// #include <netinet/in.h>
// #include "network_hook.h"
import "C"
import (
	"fmt"
	"syscall"
)

func init() {
	C.libc_hook_init()
}

//export socket
func socket(domain C.int, type_ C.int, protocol C.int) C.int {
	fmt.Println(fmt.Sprintf("open socket from thread id: %v", syscall.Gettid()))
	return C.orig_socket(domain, type_, protocol)
}

func main() {
}

/*orig_socket 是函数暴露给 golang 调用
orig_socket_func 是函数指针，指向了libc的原来的实现
socket_pfn_t 是socket()这个函数指针的类型定义
*/