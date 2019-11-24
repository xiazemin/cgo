#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  if( strcmp("test11", "test") )
  {
    printf("Incorrect password\n");
  }
  else
  {
    printf("Correct password\n");
  }
  return 0;
}