//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
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

    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        
        vector<vector<int>>ans;
        vector<int>curr;
        sort(arr.begin(),arr.end());
        helper(0,arr,k,ans,curr);
        return ans;
 
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends