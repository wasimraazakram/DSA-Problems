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

    ListNode *reverseList(ListNode *head){
        if(head==NULL)
        return NULL;

        ListNode *prev=NULL,*curr=head,*nex=head->next;
        while(curr!=NULL){
            curr->next=prev;
            prev=curr;
            curr=nex;
            if(nex!=NULL)nex=nex->next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseList(slow->next);
        ListNode *start=head,*mid=slow->next;
        while(mid!=NULL){
            if(mid->val!=start->val)
            return false;

            start=start->next;
            mid=mid->next;
        }
        return true;
    }
};