/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   
   void reverse(ListNode *start,ListNode *end){
       ListNode *prev=NULL;
       ListNode *curr=start;
       ListNode *nex=start->next;

       while(prev!=end){
           curr->next=prev;
           prev=curr;
           curr=nex;
           if(nex!=NULL)nex=nex->next;
       }
   }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==1)
        return head;

        ListNode *start=head;
        ListNode *end=head;
        int count=k-1;
        while(count--){
            end=end->next;
            if(end==NULL)
            return head;
        }
        ListNode *nexthead=reverseKGroup(end->next,k);
        reverse(start,end);
        start->next=nexthead;
        return end;
    }
};