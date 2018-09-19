#include "file3.h"
#include "file2.h"
// filename: file2.c
// When this file is linked with file1.c, functions of this file can access a
int myfun()
{

  extern int a;
  /* int a; */
  a = 4;
   return a;
}
