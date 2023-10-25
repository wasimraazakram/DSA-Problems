class Solution {
public:
    int specialArray(vector<int>& nums) {
        for(int i=0;i<1001;i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]>=i)
                count++;
            }
            if(count==i)
            return count;
        }
        return -1;

        }
        
    
};