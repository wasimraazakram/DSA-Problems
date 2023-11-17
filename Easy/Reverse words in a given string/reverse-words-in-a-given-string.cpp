//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        
            int j=0;
       int e;
       for(int i=0; i<S.size();i++){
           if(S[i]=='.'||i==S.size()-1){
               int s=j;
           
               if(i==S.size()-1){
                 e=i;   
               }else{
                 e=i-1;   
               }
             while(s<e){
                 swap(S[s],S[e]);
                 s++;
                 e--;
             }
             j=i+1;
           }
       }
      reverse(S.begin(),S.end());
       return S;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends