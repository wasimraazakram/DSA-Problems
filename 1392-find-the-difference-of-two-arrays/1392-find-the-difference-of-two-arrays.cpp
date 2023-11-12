class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
         unordered_map<int, int>mpp1,mpp2;
        for(auto it: nums1)
            mpp1[it]++;
        for(auto it : nums2)
            mpp2[it]++;
        vector<vector<int>>answer(2);
        
        for(auto i: nums1){
            if(mpp1[i]!=-1 && mpp2.count(i)==0)
                answer[0].push_back(i);
            mpp1[i]=-1;
        }
        for(auto i: nums2){
            if(mpp2[i]!=-1 && mpp1.count(i)==0)
                answer[1].push_back(i);
            mpp2[i]=-1;
        }

        return answer; 
    }
};