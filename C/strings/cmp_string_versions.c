#include <stdio.h>
#include <string.h>
#include <stdlib.h>





int main()
{

  char string1[100];
  char string2[100];
  char st1[100];
  char st2[100];

  printf("Enter two string: \n");
  fgets(string1,100,stdin);
  fgets(string2,100,stdin);

  strcpy(st1,string1);
  strcpy(st2,string2);
  
  char *token1, *token2, *saveptr1, *saveptr2;

  token1 = strtok_r(string1,".", &saveptr1);
  token2 = strtok_r(string2,".", &saveptr2);
  printf("\n-----\n");

  while(token1 !=NULL && token2 != NULL)
  {
    //printf("token1=%s \n",token1);
    //printf("token2=%s \n",token2);
    if(atoi(token1)< atoi(token2))
    {
      printf("%s is latest \n",st2);
      return 0;
    }
    else if( atoi(token1) > atoi(token2) )
    {

      printf("%s is latest \n",st1);
      return 0;

    }

    token1=strtok_r(NULL,".", &saveptr1);
    token2=strtok_r(NULL,".", &saveptr2);

  }

  if(token1 == NULL && token2 != NULL)
  {
    printf("%s is latest \n",st2);
    return 0;
  }

  else if(token1 != NULL && token2 == NULL)
  {
    printf("%s is latest \n",st1);
    return 0;
  }

  else 
  {

    printf("%s and %s are same versions \n",st1, st2);
    return 0;
  }



  return 0;

  
}

