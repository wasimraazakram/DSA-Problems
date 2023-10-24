class Solution {
public:

    vector<vector<int>>ans;

   void helper(int i,int k,vector<int> &current,int n){
        if(k==0){
            ans.push_back(current);
            return;
        }

        for( i;i<n+1;i++){
            current.push_back(i);
            helper(i+1,k-1,current,n);
            current.pop_back();
        }
    }


    vector<vector<int>> combine(int n, int k) {
        vector<int>current;
        helper(1,k,current,n);
        return ans;
    }
};