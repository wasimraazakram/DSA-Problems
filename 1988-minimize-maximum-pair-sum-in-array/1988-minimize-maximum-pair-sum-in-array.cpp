class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int maxi=INT_MIN;
        sort(nums.begin(),nums.end());
        int front=0,back=nums.size()-1;

        while(front<back){
            maxi=max(maxi,nums[front]+nums[back]);
            front++;
            back--;
        }
        return maxi;
        
    }
};