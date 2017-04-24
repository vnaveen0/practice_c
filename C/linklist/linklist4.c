/* Question 1: Delete an item in a linked list */

#include <stdio.h>

typedef struct _list_item list_item;

typedef struct _list_item {
    int value;
    list_item* next;
} list_item;
 
void del_item(list_item **root, int val)
{
   list_item* prev = *root;

   if(prev == NULL)
      return;

   if(prev->value == val)
  {
    list_item* tmp = prev->next;
    prev->value = tmp->value;
    prev->next = tmp->next;

  }  

   list_item* curr;
   curr = prev->next;

  while(curr !=NULL)
  {
    if(curr->value == val)
    {
      prev->next = curr->next;
      curr = prev->next;
    
    }
    else {
      prev = prev->next;
      curr = curr->next;
    
    }
  
  }


}

void print_list(list_item *root)
{
	list_item* lp=root;
	while(lp) {
		printf("%d\n", lp->value);
		lp=lp->next;
	}
}

int main()
{
	list_item list[6];

	list[0].value=3; list[0].next=list+1;
	list[1].value=2; list[1].next=list+2;
	list[2].value=3; list[2].next=list+3;
	list[3].value=4; list[3].next=list+4;
	list[4].value=5; list[4].next=list+5;
	list[5].value=6; list[5].next=0;

	printf("test to delete list item whose value is 3\n");
  list_item* L = list;
	del_item(&L, 3);
	print_list(list);

}
