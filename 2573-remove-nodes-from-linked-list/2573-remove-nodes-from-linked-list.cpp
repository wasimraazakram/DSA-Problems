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
    ListNode* removeNodes(ListNode* head) {
        vector<int>st;
        ListNode *temp=head;

        while(temp!=NULL){
            if(st.empty()){
                st.push_back(temp->val);
            }

            else{
                while(!st.empty() && temp->val>st.back()){
                    st.pop_back();
                    }
                    st.push_back(temp->val);
            }

            temp=temp->next;
        }
        reverse(st.begin(),st.end());
        ListNode *ans=new ListNode(st.back());
        st.pop_back();
        ListNode *a=ans;

        while(!st.empty()){
            a->next=new ListNode(st.back());
            a=a->next;
            st.pop_back();
        }
        return ans;
    }
};