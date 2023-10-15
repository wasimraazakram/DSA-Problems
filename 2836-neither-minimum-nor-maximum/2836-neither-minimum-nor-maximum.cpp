class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        priority_queue<int>pq;
        for(auto x:nums){
            pq.push(x);
        }
         if(pq.size()>2){
            pq.pop();
            return pq.top();
        }

       else
       return -1;
        
       
       
    }
};