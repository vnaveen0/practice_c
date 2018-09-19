// filename: file1.c
#include <stdio.h>
#include "file2.h"
/* #include "file3.h" */
static int a=7;
int main(void)
{
  /* int a = 5; */
  printf("myfun= %d \n",myfun());
	printf("%d \n",a);

	return 0;

}
