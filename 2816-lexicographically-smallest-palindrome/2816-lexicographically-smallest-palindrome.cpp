class Solution {
public:
    string makeSmallestPalindrome(string s) {
      
        int front=0,back=s.length()-1;

        while(front<back){
            if(front!=back){
                if(s[front]>s[back]){
                    s[front]=s[back];
                    front++;
                    back--;
                }
                else{
                    s[back]=s[front];
                    front++;
                    back--;
                }
            }
            else{
                front++;
                back--;
            }
        }
        return s;
    }
};