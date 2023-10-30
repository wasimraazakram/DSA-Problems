//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
         int x=N;
        int ctr=0;
        while(x>0){     // calulate the maximum number of candies we can buy.
            x=x-1-K;
            ctr++;
        }
        sort(candies,candies+N);
        int maxcost=0,mincost=0;
        for(int i=0;i<ctr;i++){
            mincost+=candies[i];
        }
        for(int i=N-1;i>=N-ctr;i--){
            maxcost+=candies[i];
        }
       vector<int> ans;
       ans.push_back(mincost);
       ans.push_back(maxcost);
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
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends