//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

class Solution{
		

	public:
	int solve(int cost[], int n, int w,vector<vector<int>>&dp){
       if(w == 0)return 0;
       if(n < 0)return 1e9;
       if(w < 0) return 1e9;
 
       if(dp[n][w]!=-1)return dp[n][w];
 
       if(cost[n]==-1 || w-(n+1) < 0)return solve(cost,n-1,w,dp);
 
       return dp[n][w] = min(cost[n] + solve(cost,n,w-(n+1),dp), solve(cost,n-1,w,dp));
 
    }
    int minimumCost(int cost[], int N, int W)
    {
        // Your code goes here
        vector<vector<int>> dp(N+1,vector<int>(W+1,-1));
        int ans = solve(cost,N-1,W,dp);
        if(ans >= 1e9) return -1;
        return ans;
    }
};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minimumCost(a, n, w) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends