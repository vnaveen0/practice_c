#include <stdio.h>
#include <string.h>
#include <stdbool.h>



int main()
{

  char string[100];

  printf("Enter the string:\n");

  fgets(string,100, stdin);
  //scanf("%s",string);

  int len = strlen(string)-1;
  int i=0, j=len;
  bool ispalin=true;

  for(j=len-1,i=0;i<len/2;i++,j--)
  {
    if(string[i] == string[j])
      continue;
    else 
    {
      ispalin = false;
      break;
    }
  }
  printf("%s is it a palindrome: \t",string);
  printf(ispalin ? "true \n":"false \n");
  return 0;


}
