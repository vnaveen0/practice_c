/**

 * Definition for singly-linked list.

 * struct ListNode {

 *     int val;

 *     struct ListNode *next;

 * };

 */

bool isPalindrome(struct ListNode* head) {



    if(head==NULL || head->next == NULL)

        return true;

    // if(head->next->next == NULL){

    //     if(head->val == head->next->val)

    //         return true;

    //     else 

    //         return false;

    // } 

        

    //FIND MIDPOINT    

    struct ListNode* onehop=head;

    struct ListNode* twohop=head;

    bool iseven = false;

 

    struct ListNode* mid=NULL;

    

    while(twohop->next != NULL && twohop->next->next != NULL){

        onehop=onehop->next;

        twohop=twohop->next->next;

    }

    



    if(twohop->next == NULL)

    {

        iseven= false;

        mid= onehop->next;

        onehop->next = NULL;

        //check till last but one for odd

        

    }

    else {

        iseven=true;

        mid = onehop->next;

        //SET midpoint's prev = NULL

        onehop->next = NULL;

        //check till last

    }

    





    

    //REVERSE LINKLIST from MIDPOINT

    if(mid != NULL && mid->next != NULL)

    {

        struct ListNode* prev = mid;

        struct ListNode* next = mid->next;

        struct ListNode* next2 = mid->next->next;

        

        

        next->next = prev;

        prev->next = NULL;



        if(next2 !=NULL) {

            while(next2->next != NULL) {

                

                prev = next;

                next = next2;

               

                next2 = next2->next;

                next->next=prev;

            }

            

            next2->next=next;

            mid = next2;

        }

        else {

            mid = next;

        }

        

    }

    else {

        if(mid->val == head->val)

            return true;

        else

            return false;

    }

    

   //-------------------------    

//   if(!(mid == NULL || mid->next == NULL)) {

//     struct ListNode* prev = mid;

//     struct ListNode* next = mid->next;

//     struct ListNode* next2 = next->next;

//     mid->next = NULL;

    



//     while(next2 != NULL)

//     {

//       next->next = prev;

//       prev = next;

//       next = next2;

//       next2 = next2->next;

//     }

//     next->next = prev;

//     mid = next;



//   }

  

  

  

    

    //compare link lists

    while(mid != NULL)

    {

        

        if(head->val != mid->val)

            return false;

    }

    

    return true;

    

}
















