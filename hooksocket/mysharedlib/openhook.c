#include "mysharedlib.h"
 #include <dlfcn.h>
 #define NULL 0
typedef void (*fType) ();
static void (*real_f)()=NULL;

void f(){
if (! real_f){
void * handle = dlopen("mysharedlib.dylib", RTLD_NOW);
real_f = (fType) dlsym(handle,"f");

if(! real_f) printf("NG");
}
printf("--------zz------");

real_f();
}