class Solution {
public:

    bool palindrom(string s){
        int front=0,back=s.size()-1;

        while(front<back){
            if(s[front]!=s[back])
            return false;

            else{
                front++;
                back--;
            }
        }
        return  true;
    }
    bool isStrictlyPalindromic(int n) {
      for(int i=2;i<n-1;i++){
          int p=n;
          string s;
          while(p>0){
              s.push_back(p%i);
              p=p/i;
          }
          if(!palindrom(s))
          return false;
      }
      return true;
    }
};