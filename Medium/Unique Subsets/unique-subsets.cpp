//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
      void helper(int ind, vector<int> &nums, vector<vector<int>> &ans, vector<int> &curr){
        ans.push_back(curr);

        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1])
            continue;
            curr.push_back(nums[i]);
            helper(i+1,nums,ans,curr);
            curr.pop_back();
        }
    }

    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
      
  
   
        vector<vector<int>>ans;
        vector<int>curr;
        sort(arr.begin(),arr.end());
        helper(0,arr,ans,curr);
        return ans;
    

    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends