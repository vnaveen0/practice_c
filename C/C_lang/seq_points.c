#include <stdio.h>
#include <stdlib.h>


int main()
{

  int p[2] = {3,7};
  int * q = p;
  int foo() { return 1;}
  void bar((int* x,int* y)) {}
  /* void bar(int* x){} */


  *q++;
  //=> *(q++), since unary operator is right to left
  //and not (*q)++
  
  (*q)++;
 
  printf("%d \n",(*q)++);


  int *r=malloc(sizeof(*r)),*s=r;*r=foo;bar((*r)++,(*s)++);

  return 0;
}

