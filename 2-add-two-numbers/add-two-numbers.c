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


        int p1_val=0;
        int p2_val=0;
        int sum=0;
        int carry=0;
        int digit=0;


       
        while(p1 || p2 || carry){

            
            



            if(p1!=NULL) {

                p1_val=p1->val;

            }

            else{

                p1_val=0;
            }

            if(p2!=NULL) {

                p2_val=p2->val;
            }

            else{

                p2_val=0;
            }


            

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