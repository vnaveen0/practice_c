#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>



int main()
{

  char string[100];
  char space =' ';

  printf("Enter the string:\n");

  fgets(string,100, stdin);
  //scanf("%s",string);

  int len = strlen(string)-1;
  int i=0, j=len-1;
  bool ispalin=true;

  for(j=len-1,i=0;i<= j;)
  {
    if(!isalpha(string[i]) && !isdigit(string[i])){
      i++;
      continue;
    }

    if (!isalpha(string[j]) && !isdigit(string[j])   ){
      j--;
      continue;
    }


    if(tolower(string[i]) == tolower(string[j]))
    {
      i++;
      j--;
      continue;

    }
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
