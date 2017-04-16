#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
    int val;
    struct Node *next;
};

typedef struct Node Node;

Node* sort_two_list(Node* head1,Node* head2)
{

    if(head1==NULL)
      return head2;
    else if( head2==NULL)
      return head1;

    Node *sorted_head = (Node*)malloc(sizeof(Node));
    Node *tmp = (Node*)malloc(sizeof(Node));
    Node* prev_sorted = tmp;
    sorted_head== NULL;

    if(head1->val < head2->val)
    {
      sorted_head = head1;
    }
    else 
    {
      sorted_head = head2;
    }

    Node* curr1 = head1;
    Node* curr2 = head2;

    while(curr1 != NULL &&  curr2 != NULL)
    {

      if(curr1->val <= curr2->val)
      {
        prev_sorted->next = curr1;
        prev_sorted = curr1;
        curr1 = curr1->next;

      }
      else {

        prev_sorted->next = curr2;
        prev_sorted = curr2;
        curr2 = curr2->next;

      }

    }

    if(curr2 == NULL)
      prev_sorted->next=curr1;
    else if(curr1 == NULL)
      prev_sorted->next=curr2;

    
    free(tmp);


    return sorted_head;

}

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

int main(void)
{


  Node* head = (Node*) malloc(sizeof(Node));
  head = NULL;

  Node* head2 = (Node*) malloc(sizeof(Node));
  head2 = NULL;

  int i = 0, ret = 0;


  head= add_to_list(11,head);
  head= add_to_list(9,head);
  head= add_to_list(7,head);
  head= add_to_list(6,head);
  head= add_to_list(5,head);

  print_list(head);


  head2= add_to_list(10,head2);
  head2= add_to_list(8,head2);
  head2= add_to_list(7,head2);
  head2= add_to_list(4,head2);

  print_list(head2);


  Node* sorted_head = (Node*) malloc(sizeof(Node));
  sorted_head = sort_two_list(head, head2);
  print_list(sorted_head);
  
  return 0;
}



