#include <stdio.h>
/* #include <stdlib.h> */


int main()
{

  int bar(int x) { return x;}

  int r=1, s=4;

  int z =bar((r++,s=r+8,++r));
  printf("z=%d r=%d, s=%d \n",z, r,s);
  //z=3. r=3 s=10


  //r=r+8
  //two modifications to the same variable 
  //before a sequence point is not allowed
  int k =bar((r=8,++r));
  printf("k=%d \n",k);

  int i = 11;
  i = ++i +1;
  printf("i=%d \n",i);

  return 0;
}

