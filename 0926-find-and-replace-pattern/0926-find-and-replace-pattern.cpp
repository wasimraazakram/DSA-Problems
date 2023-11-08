class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
         vector<string> ans;
        string s1,s2;
        int j,n=pattern.length();
        for(auto &i: words){
            s1 = i, s2 = pattern;
            vector<int> mp1(26,-1),mp2(26,-1);
            for(j=0;j<n;j++){
                if(mp1[s1[j]-'a']==-1 && mp2[s2[j]-'a']==-1){
                    mp1[s1[j]-'a'] = s2[j]-'a';
                    mp2[s2[j]-'a'] = s1[j]-'a';
                }else if((mp1[s1[j]-'a'] != s2[j]-'a')||(mp2[s2[j]-'a'] != s1[j]-'a')){
                    break;
                }
            }
            if(j==n)ans.push_back(i);
        }
        return ans;
    }
};