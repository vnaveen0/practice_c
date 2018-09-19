#include <stdio.h>

int main(void)
{
  int i = 10;
  int const j = 20;
  const int *ptr;
  ptr = &j;
  ptr = &i; 
  printf("*ptr: %d\n", *ptr);
  return 0;
} 
