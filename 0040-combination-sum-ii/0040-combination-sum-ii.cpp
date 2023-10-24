class Solution {
public:

    void helper(int ind,vector<int> &arr, int target, vector<vector<int>> &ans, vector<int> &curr){
       
            if(target==0){    
                ans.push_back(curr);
                return;
            }
    
       for(int i=ind;i<arr.size();i++){
           if(arr[i]>target)
           break;

           if(i>ind && arr[i]==arr[i-1])
           continue;
           curr.push_back(arr[i]);
            helper(i+1,arr,target-arr[i],ans,curr);
            curr.pop_back();
       }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>curr;
        sort(candidates.begin(),candidates.end());
        helper(0,candidates,target,ans,curr);
        return ans;
    }
};