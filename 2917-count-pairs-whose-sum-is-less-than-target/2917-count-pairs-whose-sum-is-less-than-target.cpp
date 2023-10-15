class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int count=0;
        sort(nums.begin(),nums.end());

        while(low<high){
            int n=nums[low]+nums[high];
            if(n<target){
                count+=high-low;
                low++;
            }

            else
            high--;

        }
        return count;
    }
};