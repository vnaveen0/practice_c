#include <stdio.h>
#include <string.h>

char *fun()
{
    /* static char arr[1024]; */
    static char arr[1];
    return arr;
}

int main()
{
    char *str = "geeksforgeeks"; //assigns to read-only location - So the value is in readonly location. However, pointer can point to a different string literal
    char arr[] = "geeksforgeeks"; //equivalent to const char*
    const char* arr2 = "gook";
    /* str[0] = 'a'; //illegal */
    arr[0] = 'a'; //legal
    /* arr = "asd"; //illegal */
    str= "asd"; //legal    - "asd" is still in read-only location, its just that str is pointing to a different string in read-only location

    /* arr2[0] = 'b';//illegal */



    strcpy(fun(), str);
    str = fun();
    strcpy(str, "geeksquiz"); //note dst should hold more space

    printf("%s", fun());
    return 0;
}
