#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
    int val;
    struct Node *next;
};

typedef struct Node Node;



Node* create_list(int val, Node* head)
{
    printf("\n creating list with headnode as [%d]\n",val);
    Node *ptr = (Node*)malloc(sizeof(Node));
    if(NULL == ptr)
    {
        printf("\n Node creation failed \n");
        return NULL;
    }
    ptr->val = val;
    ptr->next = NULL;

    head = ptr;
    return head;
}

Node* add_to_list(int val, Node* head)
{

    if(NULL == head)
    {
        return (create_list(val, head));
    }

    Node *ptr = (Node*)malloc(sizeof(Node));
    if(NULL == ptr)
    {
        printf("\n Node creation failed \n");
        return NULL;
    }

    ptr->val = val;
    
    ptr->next = head;
    head = ptr;

    return head;
}

Node* search_in_list(int val, Node **prev, Node* head)
{
    Node *ptr = head;
    Node *tmp = NULL;
    bool found = false;

    printf("\n Searching the list for value [%d] \n",val);

    while(ptr != NULL)
    {
        if(ptr->val == val)
        {
            found = true;
            break;
        }
        else
        {
            tmp = ptr;
            ptr = ptr->next;
        }
    }

    if(true == found)
    {
        if(prev)
            *prev = tmp;
        return ptr;
    }
    else
    {
        return NULL;
    }
}

void print_list(Node* head)
{
    Node *ptr = head;

    printf("\n -------Printing list Start------- \n \n");
    while(ptr != NULL)
    {
        printf("[%d] ",ptr->val);
        ptr = ptr->next;
    }
    printf("\n \n -------Printing list End------- \n");

    return;
}


//TODO : remove duplicates from sorted linklist
Node* remove_duplicates(Node* head)
{
  if(head == NULL || head->next == NULL)
    return head;

  Node* curr = head;


  while(curr->next != NULL)
  {
    if(curr->val == curr->next->val)
    {
      Node* next_next = curr->next->next;
      free(curr->next);
      curr->next = next_next;
    }
    else {
      curr= curr->next;
    }

  }

  return head;


}


int main(void)
{


  Node* head = (Node*) malloc(sizeof(Node));
  head = NULL;


  head= add_to_list(11,head);
  head= add_to_list(9,head);
  head= add_to_list(9,head);
  head= add_to_list(9,head);
  head= add_to_list(9,head);

  print_list(head);

  head=remove_duplicates(head);

  print_list(head);
 
  return 0;
}



