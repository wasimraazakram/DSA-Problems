//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int bpoint=-1;
        int n=N;
        
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            {
                bpoint=i;
                break;
            }
        }
        
        if(bpoint==-1)
        {
            sort(arr.begin(),arr.end());
        }
        
        else
        {
            for(int i=n-1;i>bpoint;i--)
            {
                if(arr[i]>arr[bpoint])
                {
                    swap(arr[bpoint],arr[i]);
                    break;
                }
            }
            reverse(arr.begin()+bpoint+1,arr.end());
        }
        return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends