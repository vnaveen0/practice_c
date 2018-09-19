#include "stdbool.h"
#include <stdio.h>
#include <string.h>



void swap(char* a, char* b) {
  char tmp;
  tmp=  *a;
  *a =   *b;
  *b =   tmp;
}


/* A utility function to reverse a string  */
void reverse(char str[], int length)
{
    int start = 0;
    int end = length -1;
    while (start < end)
    {
        /* swap(*(str+start), *(str+end)); */
        swap(str+start, str+end);
        start++;
        end--;
    }
}


// Implementation of itoa()
char* itoa(int num, char* str, int base)
{
    int i = 0;
    bool isNegative = false;
 
    /* Handle 0 explicitely, otherwise empty string is printed for 0 */
    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }
 
    // In standard itoa(), negative numbers are handled only with 
    // base 10. Otherwise numbers are considered unsigned.
    if (num < 0 && base == 10)
    {
        isNegative = true;
        num = -num;
    }
 
    // Process individual digits
    while (num != 0)
    {
        int rem = num % base;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        num = num/base;
    }
 
    // If number is negative, append '-'
    if (isNegative)
        str[i++] = '-';
 
    str[i] = '\0'; // Append string terminator
 
    // Reverse the string
    reverse(str, i);
 
    return str;
}
 
// Driver program to test implementation of itoa()
int main()
{
  /* char s[] = "123"; */
  /* printf("%lu \n",strlen(s)); */
  /* reverse(s,strlen(s)); */
  /*   printf("%s",s); */

  char str[100];
  printf("Base:10 %s \n", itoa(1567, str, 10) );  
  printf("Base:10 %s \n", itoa(-1567, str, 10));
  printf("Base:2  %s \n", itoa(1567, str, 2)  );  
  printf("Base:8  %s \n", itoa(1567, str, 8)  );  
  printf("Base:16 %s \n", itoa(1567, str, 16) );
  return 0;
}
