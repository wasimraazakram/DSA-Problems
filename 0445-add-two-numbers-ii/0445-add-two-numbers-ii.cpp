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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       stack<int>st1,st2,ans;

       while(l1!=NULL){
           st1.push(l1->val);
           l1=l1->next;
       }


       while(l2!=NULL){
           st2.push(l2->val);
           l2=l2->next;
       }
       int carry=0;

       while(st1.size()!=0 || st2.size()!=0){
           int sum=0;
           if(st1.size()!=0){
               sum+=st1.top();
               st1.pop();
           }
             if(st2.size()!=0){
               sum+=st2.top();
               st2.pop();
           }
           sum+=carry;
           carry=sum/10;
           sum=sum%10;

           ans.push(sum);
       }

       if(carry!=0)
       ans.push(carry);

       ListNode *head=new ListNode();
       ListNode *h=head;
       while(ans.size()!=0){
           ListNode *curr=new ListNode(ans.top());
           h->next=curr;
           h=h->next;
           ans.pop();
       }
       return head->next;



    }
};