class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxi=0;;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(!st.empty()){
                    int x=st.size();
                    maxi=max(maxi,x);
                    st.pop();     
                }
            }
        }
        return maxi;
        
    }
};