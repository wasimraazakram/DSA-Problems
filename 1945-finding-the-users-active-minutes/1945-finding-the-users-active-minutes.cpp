class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> ans(k, 0);
        unordered_map<int, unordered_set<int>> mpp;
        for(auto l : logs)
            mpp[l[0]].insert(l[1]);
        for(auto it : mpp)
            ans[it.second.size()-1]++;
        return ans;
    }
};