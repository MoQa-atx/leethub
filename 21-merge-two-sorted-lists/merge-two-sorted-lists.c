/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    
    if(!list1 && !list2) return NULL;

    if(!list1) return list2;
    if(!list2) return list1;

    struct ListNode* p1;
    struct ListNode* p2;
    struct ListNode* tail=NULL;
    struct ListNode* head;
    
    

        p1=list1;
        p2=list2;

    


    if(p1->val < p2->val){

        head=p1;
        p1 = p1->next;

    }

    else{

        head=p2;
        p2 = p2->next;


    }

    tail=head;

    while(p1 && p2){

        if(p1->val < p2->val){

            tail->next=p1;
            p1=p1->next;
            tail=tail->next;


        }

        else{

            tail->next=p2;
            p2=p2->next;
            tail=tail->next;



        }

    }

    if(p1)
    tail->next = p1;
else
    tail->next = p2;

    



return head;
}