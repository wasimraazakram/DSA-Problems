class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        vector<int>ans;

       for(auto x:nums){
           mpp[x]++;
       }

        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
       
        for(auto it:mpp){
            pq.push(make_pair(it.second,it.first));
            if(pq.size()>k){
                pq.pop();
        }

        }
        while(!pq.empty()){
            pair<int,int>temp=pq.top();
            pq.pop();
            ans.push_back(temp.second);
        }
        return ans;
    }
};