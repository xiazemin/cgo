gcc -o test main.c
 gcc -fPIC -shared -o hook.so hook.c -ldl

 LD_PRELOAD=./hook.so ./test 123

 #mac
  DYLD_INSERT_LIBRARIES=./hook.so ./test test
 Correct password
DYLD_INSERT_LIBRARIES
This is a colon separated list of dynamic libraries to load before the ones specified in the program. This lets you test new modules of existing dynamic shared libraries that are used in flat- namespace images by loading a temporary dynamic shared library with just the new modules. Note that this has no effect on images built a two-level namespace images using a dynamic shared library unless DYLD_FORCE_FLAT_NAMESPACE is also used.

 gcc -flat_namespace -dynamiclib -o hook.so hook.c
export DYLD_FORCE_FLAT_NAMESPACE=1
 export  DYLD_INSERT_LIBRARIES=./hook.so

  ./test test


  mac libc 位置
 /usr/lib/libc.dylib

 /usr/lib/libSystem.dylib
 libc.dylib和libm.dylib都是到这个文件的符号链接。