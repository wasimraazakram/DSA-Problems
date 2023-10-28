class Solution {
public:
map<int,vector<int>>mpp;

    Solution(vector<int>& nums) {
         for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]].push_back(i);
        }
    }
    
    int pick(int target) {
       int len=mpp[target].size();
       int r=rand()%len;
       return mpp[target][r];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */