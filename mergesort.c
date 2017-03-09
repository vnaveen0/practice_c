#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



bool merge (int* B,int* Left,int* Right, int left_size, int right_size );

// sort them 
bool mergesort(int* A, int size)
{

  printf("M-Sort size=%d \n", size);
  if (size < 2) return true; 

  int q = (size)/2;
  int left_size= q;
  int right_size= size-q;
  int* Left = (int*) malloc(left_size*sizeof(int));
  int* Right = (int*) malloc(right_size*sizeof(int));
  int* B = (int*) malloc(size*sizeof(int));

  //Copy elements of Left Sub Tree
  int i =0;
  int j;
  for (j=0,i=0; i<q;i++, j++) 
    Left[j] = A[i];

  i=q+1;
  j = 0;

  for (j=0,i=q; i<size;i++,j++) 
    Right[j] = A[i];


  mergesort(Left,left_size);
  mergesort(Right,right_size);
  merge(B,Left,Right, left_size, right_size);

  //copy elements of B to A
  j=0; 
  for (j=0;j<size;j++) A[j] = B[j];
  

  free(B);
  free(Left);
  free(Right);

  printf("\n-----------------\n");

  return true;
}

bool merge (int* B,int* Left,int* Right, int left_size, int right_size )
{
  printf("Merge left_size=%d, right_size=%d, \n",left_size,right_size);

  int l_size = left_size;
  int r_size = right_size;
  int l_idx =0, r_idx =0;
  int j = 0;

  while( l_idx < l_size &&  r_idx < r_size) 
  {
    if(Left[l_idx] < Right[r_idx])
    {
      B[j] = Left[l_idx];
      l_idx++;
      j++;
    }
    else 
    {
       B[j] = Right[r_idx];
       r_idx++;
       j++;
    }
  }

  //Copy remaining elements of Left
  while(l_idx < l_size )
  {
    B[j] = Left[l_idx];
    j++;
    l_idx++;
  }

  //Copy remaining elements of right
  while(r_idx < r_size)
  {
    B[j] = Right[r_idx];
    j++;
    r_idx++;
  }

  printf("-----------\n");

  j =0;
  for (j=0;j< left_size+right_size;j++)
  {
    printf(" %d",B[j]);
  }
  printf("\n");
  printf("-----------\n");



  return true;
}

int main ()
{
  int A[15]= {-1,-5,6,3,2,9,4,24,18,31,13,5,5,5,5};
  /* int A[7]= {1,5,6,3,2,9,4}; */
  /* int A[4]= {5,3,4,6}; */
  int *p = A;
  int r = sizeof(A)/sizeof(int);

  int i =0;
  for (i=0;i<r;i++)
  {
    printf(" %d",A[i]);
  }
  printf("\n");



  mergesort(p,r);

  i=0;

  for (i=0;i<r;i++)
  {
    printf(" %d",A[i]);
  }
  printf("\n");

  return 0;
}


