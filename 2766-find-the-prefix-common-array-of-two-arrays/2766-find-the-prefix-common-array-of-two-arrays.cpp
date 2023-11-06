class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> map1,map2;
        vector<int> ans;
        int count=0;
        for(int i=0;i<A.size();i++){
            map2[B[i]]++;
            map1[A[i]]++;
            if(map2.count(A[i])!=0){
                count++;}
            if(map1.count(B[i])!=0 && A[i]!=B[i]){
                count++;}
            ans.push_back(count);
        }
        return ans;
    }
};