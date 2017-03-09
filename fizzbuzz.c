#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 20
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    //Assuming equal bytes for each number
    int cols = LEN+1;
    int rows = n;
    
    //Storing the pointer bytes
    char**  d_array = (char**) malloc(rows*sizeof(char*));
    
    // For each row - get the bytes # of columns 
    for (int i=0; i< rows; i++) {
        d_array[i] = (char*) malloc(cols*sizeof(char));
        if((i+1)%15 == 0)
            strcpy(d_array[i],"FizzBuzz");
        else if((i+1)%3 == 0) 
            strcpy(d_array[i],"Fizz");
        else if( (i+1)%5 == 0) 
            strcpy(d_array[i],"Buzz");
        else 
            sprintf(d_array[i],"%d",i+1);
    }
    
    *returnSize = rows;
    return d_array;
}

int main () 
{

	int n = 15;
	int* returnSize; 
	char** d_array ;
	d_array = fizzBuzz(n,returnSize); 

	int i =0;
	for (i=0; i< *returnSize; i++)
	{
		printf("%s \n",d_array[i]);
	}


	// free blocks
	// For each row - get the bytes # of columns 
	for (int i=0; i< *returnSize; i++) 
		free(d_array[i]);

	free(d_array);


	return 0;
}
