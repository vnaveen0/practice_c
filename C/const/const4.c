#include <stdio.h>

int main(void)
{
  int i = 10;
  int const j = 20;
  int *ptr;
  ptr = &i;
  ptr =  &j;
  printf("*ptr: %d\n", *ptr);
  return 0;
}
