class Solution {
public:
    bool isIsomorphic(string s, string t) {
      
  /*      unordered_map<char,char>mpp,mpp2;
        if(s.length()!=t.length())
        return false;

        for(int i=0;i<s.length();i++){
           if(mpp[s[i]] && mpp[s[i]]!=t[i])
           return false;

           if(mpp2[t[i]] && mpp2[t[i]]!=s[i])
           return false;

           mpp[s[i]]=t[i];
           mpp[t[i]]=s[i];
        }
        return true;

        */
        if(s.length()!=t.length())
        return false;
        
        unordered_map<char, char> mp, mp2;
        for (int i=0; i<s.length(); ++i) {
            if (mp[s[i]] && mp[s[i]]!=t[i]) return false;
            if (mp2[t[i]] && mp2[t[i]]!=s[i]) return false;
            mp[s[i]]=t[i];
            mp2[t[i]]=s[i];
        }
        return true;
      
    }
};