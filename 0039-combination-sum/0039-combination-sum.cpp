class Solution {
public:

    void helper(int ind,vector<int> &arr,int target,vector<vector<int>> &ans, vector<int> &curr){
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(curr);
            }
            return;
        }
        if(arr[ind]<=target){
            curr.push_back(arr[ind]);
            helper(ind,arr,target-arr[ind],ans,curr);
            curr.pop_back();
        }
        helper(ind+1,arr,target,ans,curr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>curr;
        helper(0,candidates,target,ans,curr);
        return ans;
    }
};