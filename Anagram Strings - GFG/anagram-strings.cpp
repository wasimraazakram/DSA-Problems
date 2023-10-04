//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int areAnagram(string S1, string S2) {
        // code here
         unordered_map<char,int>mpp;

        for(int i=0;i<S1.size();i++){
            mpp[S1[i]]++;
        }

        for(int i=0;i<S2.size();i++){
            if(mpp.find(S2[i])==mpp.end())
            return 0;

            else if(mpp[S2[i]]>1)
            mpp[S2[i]]--;

            else
            mpp.erase(S2[i]);
        }
       if(mpp.empty())
       return 1;

       else
       return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.areAnagram(S1, S2) << endl;
    }
    return 0;
}

// } Driver Code Ends