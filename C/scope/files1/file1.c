// filename: file1.c
#include <stdio.h>
int a;

/* extern int a; */
int myfun()
{
  /* int a; */
   a = 4;
   return a;
}

int main(void)
{
	a = 2;
  printf("myfun= %d \n",myfun());
	printf("%d \n",a);

	return 0;

}
