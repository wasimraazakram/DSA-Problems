/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head,*slow=head;
         while(fast!=NULL && fast->next!=NULL){
             fast=fast->next->next;
             slow=slow->next;

             if(slow==fast)
             break;
         }
         if(fast==NULL || fast->next==NULL)
         return NULL;

         ListNode *ptr1=head,*ptr2=slow;
        while(ptr1!=ptr2){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return ptr1;
    }
};