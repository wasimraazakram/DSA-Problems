class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>>s;
        vector<int>ans;
        
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1)
                count++;
            }
           s.insert({count,i});
        }
       for(auto x=s.begin();k>0;k--,x++){
           ans.push_back(x->second);
       }
        return ans;
        
    }
};