go build -buildmode=c-shared -o libmotrix.so main.go

ld: symbol(s) not found for architecture x86_64

然后调用

LD_PRELOAD=libmotrix.so curl http://www.baidu.com
就会把 socket 的 lib 调用给拦截下来

$ go build -v -buildmode=c-shared -o libmotrix.so main.go
command-line-arguments
# command-line-arguments
Undefined symbols for architecture x86_64:
  "_libc_hook_init", referenced from:
      __cgo_579131595ff2_Cfunc_libc_hook_init in main.cgo2.o
     (maybe you meant: __cgo_579131595ff2_Cfunc_libc_hook_init)
  "_orig_socket", referenced from:
      __cgo_579131595ff2_Cfunc_orig_socket in main.cgo2.o
     (maybe you meant: __cgo_579131595ff2_Cfunc_orig_socket)
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)

go tool cgo main.go
会生成cgo_export.h