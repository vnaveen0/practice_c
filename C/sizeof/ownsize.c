#include <stdio.h>

#define my_sizeof(type) (char *)(&type+1)-(char*)(&type)
int main()
{
    double x;
    printf("%d \n", sizeof(char));
    printf("%d \n", sizeof(double));
    printf("%d \n", my_sizeof(x));

		printf("%x \n", (char*)(&x+1) - (char*)(&x));
    
    return 0;
}
