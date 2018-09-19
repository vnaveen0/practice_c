#include <stdio.h>

int main()
{
  // if one element is initialized -> others are initialized to 0
  // if none initialized then the values are indeterminate
  // others initialized same as static storage specifier would do -- similarly to struct and unions
  int arr[5] = {2};
  /* int arr[5];  */
  printf("%d \n",arr[2]);
  return 0;
}
