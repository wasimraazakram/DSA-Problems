class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mpp;
        

        for(auto x:sentence){
            mpp[x]++;
        }
        
        if(mpp.size()==26)
        return true;

        else
        return false;
    }
};