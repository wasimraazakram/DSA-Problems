class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int start=1;
        int end=*max_element(nums.begin(),nums.end());
        int ans=end;

        while(start<end){
            int mid=(start+end)/2;
            int ops=0;

            for(int i=0;i<nums.size();i++){
                if(nums[i]>mid){
                    if(nums[i]%mid==0){
                        ops+=nums[i]/mid-1;
                    }
                    else
                    {
                        ops+=nums[i]/mid;
                    }
                }
            }
            if(ops<=maxOperations){
                ans=mid;
                end=mid;
                }
                
            else
            start=mid+1;
        }

        
        return ans;
    }
    
};