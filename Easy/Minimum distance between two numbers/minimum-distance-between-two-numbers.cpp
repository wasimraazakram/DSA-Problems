//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int min1=INT_MAX, min2=INT_MAX, ans=INT_MAX;
        bool flag1=0, flag2=0;
        for( int i=0; i<n; i++)
        {  
            if(a[i]==x)
            {
              min1=i;
              flag1=1;
            }
            if(a[i]==y)
            {
                min2=i;
                flag2=1;
            }
            if(flag1 && flag2) ans= min(ans, abs(min2-min1));
        }
        if(min1==INT_MAX || min2==INT_MAX) return -1;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends