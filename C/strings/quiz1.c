#include <stdio.h>
#include <string.h>


int main()
{

    char *str = "geeksforgeeks"; //assigns to read-only location - So the value is in readonly location. However, pointer can point to a different string literal

    //char arr[] gives stack smashing error since, gcc adds protection variables 
    //however, static char arr[] does not give error - since, this goes to global memory space and gcc does nothing to protect it
    /* char arr[] = "back1234kgirrqe"; //equivalent to const char* */
    static char arr[] = "back"; //equivalent to const char*


    strcpy(arr, str);
    str = arr;
    strcpy(str, "geeksquiz"); //note dst should hold more space

    printf("%s", arr);
    return 0;
}
