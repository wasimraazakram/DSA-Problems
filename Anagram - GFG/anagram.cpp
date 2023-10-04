//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        
          unordered_map<char,int>mpp;

        for(int i=0;i<a.size();i++){
            mpp[a[i]]++;
        }

        for(int i=0;i<b.size();i++){
            if(mpp.find(b[i])==mpp.end())
            return false;

            else if(mpp[b[i]]>1)
            mpp[b[i]]--;

            else
            mpp.erase(b[i]);
        }
       if(mpp.empty())
       return true;

       else
       return false;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends