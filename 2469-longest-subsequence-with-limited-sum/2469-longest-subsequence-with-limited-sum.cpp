class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int>ans(queries.size());
        
        for(int i=0;i<queries.size();i++){
            int sum=0;
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(sum+nums[j]<=queries[i]){
                    sum+=nums[j];
                    count++;
                }
                else
                break;
            }
            ans[i]=count;
        }
        return ans;
    }
};