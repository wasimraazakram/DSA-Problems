class Solution {
public:
    int minSteps(string s, string t) {
         int cnt=0;
        vector<int> v(26,0);
        
        for(int i=0;i<s.size();i++)
            v[s[i]-'a']++;
        
        for(int i=0;i<t.size();i++)
            v[t[i]-'a']--;
        for(int i=0;i<26;i++)
        {
           
            cnt+=abs(v[i]);
        }
        return cnt;
    }
};