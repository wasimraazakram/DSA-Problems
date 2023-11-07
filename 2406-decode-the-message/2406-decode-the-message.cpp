class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char>mpp;
        string ans = "";
        int i = 0;
        for(auto k : key){
            if(k != ' '){
                if(!mpp[k])
                   mpp[k] = 'a' + i++;
            }
        }
        for(auto msg :message){
            if(msg == ' ')
                ans += " ";
            else
                ans +=mpp[msg];
        }
        return ans;
    }
};