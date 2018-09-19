#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct person {
  unsigned age;
  char sex;
  size_t size;
  char name[];
} person;

person*  alloc_person(int a, char s, size_t n) {
  person * ret = calloc(sizeof(person) + n, 1);// each char is a byte in size
  if (ret) memcpy(ret,
                  &(person const){ .age = a, .sex = s, .size = n},
                  sizeof(person));
  return ret;
}


int main()

{
	person* man ;//= {(int) 32,(char)'M', 32};
	man= alloc_person(32,'M', 6);

	strncpy(man->name,"NAVEEN",strlen("NAVEEN"));
  printf("%s \n",man->name);


	return 0;
}
