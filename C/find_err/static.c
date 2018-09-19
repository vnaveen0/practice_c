#include <stdio.h>


int func()
{
  static int i=0;
  return i++;

}

int main()
{
  printf("%d  %d %d",func(), func(), func());
  return 0;
}


