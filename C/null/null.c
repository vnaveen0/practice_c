#include <stdio.h>

int main()
{
  int *ptr = (int*)0;
  char* ptr2 = "abc";
  printf("%s \n",ptr2);
  printf("%d \n",*ptr);
  return 0;
}

