go build -x -v -ldflags "-s -w" -buildmode=c-shared  -o libhello.so main.go

mv $WORK/command-line-arguments/_obj/_cgo_install.h libhello.h
mv $WORK/command-line-arguments/_obj/exe/libhello.so libhello.so

$ tree ./
./
├── build.sh
├── libhello.h
├── libhello.so
├── main.c
└── main.go

执行完毕的目录结构到多了libhello.h 和 libhello.so
使用下面的命令编译C文件.(-L指定动态链接库目录 -l指定动态链接库文件 -I指定头文件目录)
gcc -I./ -L./ -lhello -o main main.c

$ tree ./
./
├── build.sh
├── libhello.h
├── libhello.so
├── main
├── main.c
└── main.go


$ ./main
export Test
Helloargp=casp1casp2casp3falsefaultgcingpanicstart (MB)
 addr= code= ctxt: curg= list= m->p= p->m= prev= span= varp=(...)
, not SCHED     typesefenceerrno etypesobjectsignalstatussweep  (scan  (scan) MB in  dying= locks= m->g0= s=nil
, goid=, sys: GODEBUGSignal     defer   value=cs     fs     gctracego1.9.2gs     panic: r10    r11    r12    r13    r14    r15    r8     r9     rax    rbp    rbx    rcx    rdi    rdx    rflags rip    rsi    rsp    runningsyscallunknownwaiting goalΔ= helpgc= is not  mcount= minutes nalloc= newval= nfreed= packed= pointer stack=[, idle: [signal
-----

这里有个注意的地方就是main.go文件中的//export Hello 和 //export Test这个是有作用的,没有这个就不会生成对应的头文件方法.也就是此方法就不会被导出.

