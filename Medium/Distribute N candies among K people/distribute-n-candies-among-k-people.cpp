//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<long long> distributeCandies(int N, int K) {
        // code here
         vector<long long> ans(K,0);
        int index=0;
        int temp=1;
        while(N>0)
        {
            index=index%K;
            if(N-temp>0)
            {
                ans[index]+=temp;
                N=N-temp;
                temp++;
                index++;
            }
            else
            {
                ans[index]+=N;
                N=0;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N>>K;
        
        Solution ob;
        vector<long long> res = ob.distributeCandies(N,K);
        
        for(int i=0; i<res.size(); i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends