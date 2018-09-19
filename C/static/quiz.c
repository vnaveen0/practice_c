#include "stdio.h"
void foo(void)
{
 static int staticVar;
 staticVar++;
 printf("foo: %d\n",staticVar);
}

void bar(void)
{
 static int staticVar;
 staticVar++;
 printf("bar: %d\n",staticVar);
}

int main()
{
/*  foo(), bar(), foo(); */
 foo(), bar();
 return 0;
}
