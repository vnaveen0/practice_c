#include <stdio.h>


int main()
{
  int i;
  int j;

  int* const ptr1 = &i;

  printf("%d \n", *ptr1);
  printf("%d \n", i);

  return 0;
}
