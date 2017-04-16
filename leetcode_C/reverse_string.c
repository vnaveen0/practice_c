#include "string.h"
#include <stdio.h>
#include  <stdlib.h>

char* reverseString(char* s) {
    
  int max = strlen(s);
  char* tmp = (char*) malloc(max*sizeof(char));
  int i = max;

  tmp[i] = '\0'; 
  i--;

   while(i != -1)
  {
    tmp[i] = *s;
    i--;
    s++;
  }

  return tmp; 
}



char* reverseString2(char* s) {

	int size = 10000;
	char* tmp = (char*) malloc(size*sizeof(char));
	int i =0;

	while(*s != '\0')
	{

		if(i == size -1)
		{
			size = 2*size;
			tmp = (char*) realloc(tmp,size);
		}

		else { 

			tmp[i] = *s;
			s++;
			i++;
		}
	}

	i--;
	int j=0;
	char* tmp2 = (char*) malloc(size*sizeof(char));

	while(i!=-1) {
		tmp2[j] = tmp[i];
		j++;
		i--;
	}

	tmp2[j] = '\0';
	free(tmp);
	return tmp2; 
}




char* reverseString3(char* s) {

  int size = 10000;
  char* tmp = (char*) malloc((size+1)*sizeof(char));
  int i = size;

  tmp[i] = '\0';

  while(*s != '\0')
  {

    if(i == -1)
    {
      size = 2*size;
      tmp = (char*) realloc(tmp,size);
    }

    else { 

      tmp[i] = *s;
      s++;
      i--;
    }
  }

  return &tmp[i+1];
}



int main() {

	char * test= "hello";
  char * test2= "\"Revolt love!\" raved Eva. \"Revolt lover!\"";

	char* output1 = (char*) malloc(2048*sizeof(char));
	char* output2 = (char*) malloc(2048*sizeof(char));
	strcpy(output1,reverseString(test)) ;
	strcpy(output2,reverseString(test2)) ;
	printf("%s \n",output1);
	printf("%s \n",output2);

	return 0;
}



