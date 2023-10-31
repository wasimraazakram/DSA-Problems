class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>ans;
        vector<int>csum;
        int sum=0;
       
        for(int i=0;i<n;i++){
            sum=(sum+nums[i])%1000000007;
            csum.push_back(sum);
        }
   
        for(int i=0;i<n;i++){
            ans.push_back(csum[i]);
            for(int j=i+1;j<n;j++){
                ans.push_back(csum[j]-csum[i]);
            }
        }
        sort(ans.begin(),ans.end());
        sum=0;
        for(int i=left-1;i<=right-1;i++){
           sum=(sum+ans[i])%1000000007;
        }
        return sum;
    }
};