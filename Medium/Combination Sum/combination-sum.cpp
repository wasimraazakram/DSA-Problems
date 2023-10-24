//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    
    void solve(int index , vector<int> &A, int B , vector<vector<int>> &res , vector<int>temp)
    {
        if(B==0)
        {
            res.push_back(temp);
            return;
        }
        if(B<0 || index>=A.size())
        {
            return;
        }
        
        if(A[index]<=B)
        {
            temp.push_back(A[index]);
            solve(index,A,B-A[index],res,temp);
            temp.pop_back();
        }
        while(index<A.size()-1 && A[index+1]==A[index] )
        {
            index++;
        }
        solve(index+1 , A,B,res,temp);
    }
    
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>>res;
        vector<int>temp;
        sort(A.begin(),A.end());
        int index=0;
        solve(0,A,B,res,temp);
        return res;
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
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
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