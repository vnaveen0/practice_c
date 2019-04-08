#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

int main() {

uint8_t bufftx [10] = "0,0\n\r";
uint8_t predicted = 6;
uint8_t actual = 5;

uint8_t pred_char = 48 + predicted;
uint8_t actual_char = 48 + actual;

bufftx[0] = pred_char;
bufftx[2] = actual_char;

//uint8_t str[80];
//strcpy(str, (char) pred_char);
//strcpy(str,",");
////strcpy(str,actual_char);
//strcpy(str,"\n\r");

printf("%s",(char*) bufftx);


//    char str[80];
//    strcpy(str, "these ");
//    strcat(str, "strings ");
//    strcat(str, "are ");
//    strcat(str, "concatenated.");

}
