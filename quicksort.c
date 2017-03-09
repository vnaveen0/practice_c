#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


//forward declarations
int partition(int *A,int start_idx,int end_idx);
void swap(int *A, int from , int to);

bool quick_sort(int* A, int start_idx, int end_idx)
{
  printf("Q_S: start_idx:%d, end_idx:%d \n",start_idx,end_idx);
  if(start_idx >= end_idx) return false;

  int pivot_idx = partition(A, start_idx, end_idx);

  quick_sort(A,start_idx, pivot_idx-1);
  quick_sort(A,pivot_idx+1,end_idx);

  return true;
}


int partition(int *A,int start_idx,int end_idx)
{

  // This will never fire
  if(start_idx >= end_idx) return -1;

  srand( (unsigned) time(NULL));

  int pivot_idx = rand()%(end_idx); // rand is inclusive of RAND_MAX
  //moves pivot to the end
  swap(A,pivot_idx,end_idx);
  printf("\n------ PARTITION FUNC PIVOT: %d ------------------\n", A[end_idx]);

  int j=0;
  int p_idx = 0;
  for (j=0;j<end_idx;j++)
  {
    //end index contains the pivot element now
    if(A[j] <= A[end_idx])
    {
      swap(A,j,p_idx);
      p_idx++;
    }

  }

  //moves pivot to  p_idx
  swap(A,p_idx,end_idx);
  pivot_idx = p_idx;
  

  j=0;

  for (j=0;j<=end_idx;j++) printf(" %d",A[j]);
  printf("\n------------------------\n");
  return pivot_idx;
}


void swap(int *A, int from , int to)
{
  int tmp = A[from];
  A[from] = A[to];
  A[to] = tmp;
}







int main ()
{
  /* int A[15]= {-1,-5,6,3,2,9,4,24,18,31,13,5,5,5,5}; */
  /* int A[7]= {1,5,6,3,2,9,4}; */
  int A[4]= {5,3,4,6};
  int *p = A;
  int r = sizeof(A)/sizeof(int);

  int i =0;
  printf("Original Input:\n");
  for (i=0;i<r;i++)
  {
    printf(" %d",A[i]);
  }
  printf("\n");



  quick_sort(p,0,r-1);

  i=0;

  printf("Sorted Output: \n");
  for (i=0;i<r;i++)
  {
    printf(" %d",A[i]);
  }
  printf("\n");

  return 0;
}


