$ gcc -dynamiclib main.c -o libHook.dylib -Wall
$ DYLD_INSERT_LIBRARIES=libHook.dylib ls
build.sh        libHook.dylib   main.c          main1.c


$  gcc -dynamiclib open.h -o open.dylib -Wall

$ DYLD_INSERT_LIBRARIES=open.dylib ./m