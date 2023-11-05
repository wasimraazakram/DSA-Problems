class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
      
        unordered_map<int, int>mpp;
        vector<vector<int>> ans;

        for(auto x : nums) {
            mpp[x]++;
        }
        
        
        while(mpp.size()) {
            vector<int> v;
            for(auto it : mpp) {
                v.push_back(it.first);
            }
            for(int i : v) {
                if(!--mpp[i]) 
                mpp.erase(i);
            }
            ans.push_back(v);
        }
        return ans;
    }
};