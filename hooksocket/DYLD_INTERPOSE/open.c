#include <stdio.h>

int main()
{
   FILE *fp = NULL;

   fp = fopen("/Users/didi/goLang/src/github.com/xiazemin/cgo/hooksocket/DYLD_INTERPOSE/date2.txt", "w+");
   if(fp!=NULL){
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   //print("finish");
   printf(" test hello world");
   fclose(fp);
   }
    printf(" test hello world11");
}