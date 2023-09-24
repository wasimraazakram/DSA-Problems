//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string result="";
  int j;
  int count=1;
  char c;
  int n=src.length();
  
   for(int i=0;i<n;i++){
        c=src[i];
        for(j=i;j<n;j++){
               if(c==src[j+1])
               count++;
               
               else{
                     //i=j;
                    
                     break;
               }
               
        }
        
        i=j;
        result=result+c;
       result=result+to_string(count);
       count=1;
   }
   return result;
  
}     
 
