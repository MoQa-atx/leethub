/**
 * Definition for singly-linked list.
 * typedef struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * }ListNode;
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    
   struct ListNode *current=head;
   struct ListNode *temp = NULL;
   int counter = 0;
   int nodePos = 0;
   int move = 0;
      while(current!=NULL) { // sayma

        current=current->next;
        counter++;
   }
    nodePos=counter-n; // asıl sileceğim node

    if(nodePos==0){ // headi silme
        temp = head;
        head=head->next;
        free(temp);
        return head;
        
    }
    

current = head;
 
    while(current!=NULL && move < nodePos){

        temp=current;
        current=current->next;
        move++;
    }




    temp->next=current->next;
    free(current);
    return head;




}