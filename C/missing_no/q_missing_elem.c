#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>




bool findmissing(int* A, int size)
{


}



int main ()
{
  int A[15]= {-2,-1,0,1,2,4,5,6,7};
  /* int A[7]= {1,5,6,3,2,9,4}; */
  /* int A[4]= {5,3,4,6}; */
  int *p = A;
  int r = sizeof(A)/sizeof(int);

  int i =0;
  printf("Original Input:\n");
  for (i=0;i<r;i++)
  {
    printf(" %d",A[i]);
  }
  printf("\n");



  int missingelem;
  missingelem=findmissing(p,r);

  printf("Missing Elem:%d \n",missingelem);
  
  return 0;
}


