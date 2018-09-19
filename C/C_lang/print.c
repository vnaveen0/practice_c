#include <stdio.h>


int main()
{

  //octal character
  /* char a = '\101'; */
  //hex character
  /* char a = '\x41'; */

  //e = 10
  /* double a = 5e2; */

  /* char* s = "tutti " "fruti " "ice cream " ;  */
  //above gets concatenated
  //will print "tutti fruti ice cream" 
  //to add " add \" as escape sequence
  /* printf("%s", s); */

  /* complex a; */
  /* enum {kiwi, cherry, apple};  */
  /* int a = kiwi; */
  /*  */
  /* printf("%d", a); */


  /* struct f1 f1; */

  //ERROR
  /* struct f2 { */
  /*   struct f1 f1;  */
  /*   int data[3]; */
  /* } f2 = { { 1 }, { 2, 3, 4 } }; */

  struct f1 {
      int x; int y[];
  }; 

 struct f1 f2 = { 3, { 2, 3, 4 } };

  /* printf("%d",f1.x); */
  
  return 0;

}
