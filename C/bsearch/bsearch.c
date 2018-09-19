/* Question 2: write a binary search function on a sorted ascending int array.
   return the index of the element.
   eg:
   int t[] = [1,3,5,7,9];
   find index of 5.
*/

#include <stdio.h>
int bsearch(int *table, int sz, int key)
{

  int bsearch1(int* table,int p ,int r,int key)
  {
    int size = r -p;
    if( size<2)
    {
      if(table[p] == key)
        return p; 
      else if( table[r] == key)
        return r;
      else 
        return -1;
    }

    int mid = size/2;

    int idx_left =  bsearch1(table,p,mid,key);
    int idx_right = bsearch1(table,mid+1,r,key);

    if(idx_left == idx_right == -1 )
      return -1;
    else 
    {
      if (idx_left != -1) return idx_left;
      else return idx_right; 
    } 
  }

  return bsearch1(table,0,sz-1,key);
}



int main()
{
  //int t[6] = {1,3,5,7,9};
  //int t[2] = {2,2};
  int t[0] = {};
  int *T = t;
  int i = bsearch(T,0,2);
  printf(" index of search: %d \n",i);
  return 0;



}

