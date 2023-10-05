//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
           int n=str.size();
        int i=0;
        int num=0;
        while(str[i]==' ')i++;

        bool positive =str[i]=='+';
        bool negative=str[i]=='-';
        positive==true ? i++:i;
        negative==true ? i++:i;

        while(i<n){
            if(str[i]>='0' && str[i]<='9'){
                 num=num*10+(str[i]-'0');
            i++;
            }
            else
            return -1;
           
        }
        num=negative?-num:num;
        return num;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends