//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int KthMissingElement(int a[], int n, int k);


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << KthMissingElement(a, n, k) << endl;
    
    }
    return 0;
}

// } Driver Code Ends


int KthMissingElement(int a[], int n, int k)
{
    // Complete the function
    
        int s=0;
    int e=n-1;
   // int mid;
    while(s<=e){
        int mid=s+(e-s)/2;
        int diff=a[mid]-mid-a[0];

        if(diff==0||diff<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        
    }
    if(s==n){
        return -1;
    }
    return s+k+a[0]-1;

       
}