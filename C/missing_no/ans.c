#include <stdio.h>
#include <stdlib.h>
/* #include <stdbool.h> */
#include <limits.h>

// Find missing number in sorted array. 
// time complexity need to be O(log(n))

int findmissing(int* A,int p, int r)
{

  //For two elements
  if(r-p == 1)
  {
    if(A[p] +1 == A[r])
      return INT_MIN;
    else 
      return A[p]+1;
  
  }

  int mid = (r-p)/2;
  int q = p+mid;

  //if(p==q) return INT_MIN;

  int left_missing=  findmissing(A,p,q);
  int right_missing= findmissing(A,q+1,r);

  if(left_missing != INT_MIN)
    return left_missing;
  if(right_missing != INT_MIN)
    return right_missing;

  if( A[q] + 1 != A[q+1])
    return A[q] +1;
  else 
    return INT_MIN;

}



int main ()
{
  int A[8]= {-1,0,1,2,3,4,6,7};
  //int A[5]= {-1,0,1,3,4};
  //int A[3]= {3,4,6}; 
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
  missingelem=findmissing(p,0,r-1);

  printf("Missing Elem:%d \n",missingelem);
  
  return 0;
}


