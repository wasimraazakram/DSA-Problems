class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        map<int,int>mpp;
        vector<int>ans;

        for(auto x:nums){
            mpp[x]++;
        }
        for(auto it:mpp){
            if(it.second>=2){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};