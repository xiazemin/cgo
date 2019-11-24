gcc -dynamiclib -o mysharedlib.dylib mysharedlib.c
gcc mysharedlib.dylib main.c -o main

./main
hello,dani


gcc -flat_namespace -dynamiclib -o openhook.dylib openhook.c

export DYLD_FORCE_FLAT_NAMESPACE=1
export DYLD_INSERT_LIBRARIES=openhook.dylib

 ./main
--------zz------hello,dani

mac 的libc 位置
ls /usr/lib/libc.dylib