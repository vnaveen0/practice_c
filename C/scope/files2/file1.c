// filename: file1.c
#include <stdio.h>
#include "file2.h"


/* static int a; */
extern int a;
/* int a; */

int main(void)
{
  a =2;
	/* a = 2; */
  printf("myfun= %d \n",myfun());
	printf("%d \n",a);

	return 0;

}
