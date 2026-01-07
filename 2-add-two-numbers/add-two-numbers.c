    /**
    * Definition for singly-linked list.
    * struct ListNode {
    *     int val;
    *     struct ListNode *next;
    * };
    */
    struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
        
        struct ListNode* p1;
        struct ListNode* p2;
        struct ListNode* head=NULL;
        struct ListNode* tail=NULL;
        

       
        p1=l1;
        p2=l2;


        int p1_val;
        int p2_val;
        int sum;
        int carry=0;
        int digit;


       
        while(p1 || p2 || carry){

            
            



            p1_val=(p1!=NULL)? p1->val : 0;
            p2_val=(p2!=NULL)? p2->val : 0;

            

            sum=p1_val+p2_val+carry;


             digit = sum%10;
            carry = sum/10;

        struct ListNode* node=(struct ListNode*)malloc(sizeof(struct ListNode));
            node->val=digit;
            node->next=NULL;



            if(head==NULL){

                head=node;
                tail=node;


            }
            else{

                tail->next=node;
                tail=node;


            }
            if(p1!=NULL) p1=p1->next;
            if(p2!=NULL) p2=p2->next;
            
        }
    

    return head;
    }