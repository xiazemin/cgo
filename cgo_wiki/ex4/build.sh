$ gcc -c clibrary.c

#注意带参数-c，否则直接编译为可执行文件




$ ar -crv libclibrary.a clibrary.o
a - clibrary.o

#然后，通过ar工具将目标文件打包成.a静态库文件

#注意名字是libxxx 否则下一步会报
## command-line-arguments
# ld: library not found for -lclibrary
# clang: error: linker command failed with exit code 1 (use -v to see invocation)


$ go build -v main.go cfunc.go
command-line-arguments

$ ./main
Go.main(): calling C function with callback to us
C.some_c_func(): calling callback with arg = 2
C.callOnMeGo_cgo(): called with arg = 2
C.some_c_func(): callback responded with 3
