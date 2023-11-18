//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     
      int Ssize = s.length();
    int Xsize = x.length();
    int finalSize = Ssize - Xsize;
    int i, j;
    for (i = 0; i <= finalSize; i++) {
        for (j = 0; j < Xsize; j++) {
            if (s[i + j] != x[j]) {
                break;
            }
        }
        if (j == Xsize) {
            return i;
        }
    }
    return -1;
}