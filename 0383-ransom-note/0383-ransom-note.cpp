class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mpp;
        
        for(int i=0;i<magazine.length();i++){
            mpp[magazine[i]]++;
        }
       
       for(int i=0;i<ransomNote.length();i++){
           if(mpp.find(ransomNote[i])==mpp.end())
           return false;

           else{
               if(mpp[ransomNote[i]]<1)return false;
               mpp[ransomNote[i]]--;
           }

       }
       return true;

    }
};