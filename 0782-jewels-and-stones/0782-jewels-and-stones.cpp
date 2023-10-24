class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       
        unordered_map<char,int>mpp;

        for(auto x:stones){
            mpp[x]++;
        }
        int count=0;
        for(int i=0;i<jewels.length();i++){
            for (auto it:stones){
                if(mpp.find(jewels[i])!=mpp.end()){
                    count+=mpp[jewels[i]];
                   break;
                }
            }
        }
        return count;
    }
};