class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
       int n=nums.size();
        //int i=0,j=0,k=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if((nums[j]-nums[i]==diff) && (nums[k]-nums[j]==diff))
                    {
                        cnt+=1;
                    }
                }
            }
        }
        return cnt;
    }
};