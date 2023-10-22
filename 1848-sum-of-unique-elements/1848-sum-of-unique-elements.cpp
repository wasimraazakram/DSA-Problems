class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int ans=0;

        for(auto x:nums){
            mpp[x]++;
        }
        for(auto it:mpp){
            if(it.second==1){
                ans+=it.first;
            }
        }
        return ans;
    }
};