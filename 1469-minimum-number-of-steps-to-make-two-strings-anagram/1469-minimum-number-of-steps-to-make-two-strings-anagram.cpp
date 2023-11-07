class Solution {
public:
    int minSteps(string s, string t) {
       unordered_map<int,int>mpp;
       int count=0;

       for(auto x:s){
           mpp[x]++;
       }
       for(auto i:t){
           if(mpp[i]>0)
           mpp[i]--;
       }
       for(auto it:mpp){
           count+=it.second;
       }
       return count;
    }
};