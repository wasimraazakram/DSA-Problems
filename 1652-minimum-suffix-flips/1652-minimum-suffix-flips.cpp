class Solution {
public:
    int minFlips(string s) {
          int ans=0;
        for(int i=1;i<s.length();i++)  if(s[i]!=s[i-1])  ans++;
        if(s[0]=='0')   return ans;
        return ++ans;
    }
};