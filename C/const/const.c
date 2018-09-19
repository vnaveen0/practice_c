#include <stdio.h>


//type qualifiers can be named before or after a data type
//type qualifiers in C :- const, voaltile

int main()
{
  const int t=0;
  int const t2=1;


  //both are one and the same thing
  //ptr -> pointing to const int type
  const int* ptr1;
  int const* ptr2;
  // *ptr1++ not allowed

  //Similary
  //Note:  * can be anywhere space doesn't matter
  //const pointer -> pointing to int data

  int* const ptr3;
  int  *const ptr4;
  //ptr3++ or ptr4++ not allowed



  return 0;
}
