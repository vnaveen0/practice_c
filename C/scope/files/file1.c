// filename: file1.c
#include <stdio.h>
#include "file2.h"
int a;
int main(void)
{
	a = 2;
  printf("myfun= %d \n",myfun());
	printf("%d \n",a);

	return 0;

}
