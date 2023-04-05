//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    
    sort(arr,arr+n);
    
        int floor=INT_MIN;
        sort(arr,arr+n);
        
        if(arr[0]>x)
        floor=-1;
        
        else
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]<=x)
                floor=arr[i];
            }
            auto it=upper_bound(arr,arr+n,floor)-1;
            floor=*it;
        }
      
      int ceil=-1;;
      
      if(x>arr[n-1])
      ceil=-1;
      
      else
      {
          for(int i=n-1;i>=0;i--)
          {
              if(arr[i]>=x)
              ceil=arr[i];
          }
          
          auto itr=upper_bound(arr,arr+n,ceil)-1;
          ceil=*itr;
      }
      
      return{floor,ceil};
       
        
}