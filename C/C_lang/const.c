#include <stdio.h>

int main()
{

  //volatile pointer to -> int volatile data;
  //syntax for data -> 
  int volatile x;
  volatile int y; //both x and y are correct

  //pointers can be of type volatile or const
  //pointing to a const or volatile data
  int volatile * volatile p;
  const int* const p2;
  
  return 0;
}
