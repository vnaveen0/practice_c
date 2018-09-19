#include <stdio.h>
#include <string.h> // memcpy

void printname(char *name, int length)
{
    char name_copy[length];
    memcpy(name_copy, name, length);
    printf("Name is: %s\n", name_copy);
}


int main(int argc, char* argv[])
{
    char name[]= "fred";
    printname(name, 5); // 4 chars + nul terminator
    return 0;
}



