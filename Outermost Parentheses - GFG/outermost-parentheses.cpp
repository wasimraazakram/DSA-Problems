//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        stack<char>st;
        string ans;
        for(auto it: s)
        {
            if(it == '(')
            {
                if(st.size()>0)
                {
                    ans.push_back(it);
                  
                }
                  st.push(it);
            }
            else
           {
               st.pop();
               if(!st.empty())
               ans.push_back(it);
                
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
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends