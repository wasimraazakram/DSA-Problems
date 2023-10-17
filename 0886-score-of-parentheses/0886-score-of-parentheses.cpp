class Solution {
public:
    int scoreOfParentheses(string s) {
       stack<int>st;
       int val=0;
         int ans=0;

        for(int i=0;i<s.length();i++){
            
            if(s[i]=='('){
                st.push(-1);
            }

            else{
                if(st.top()==-1){
                    st.pop();
                    st.push(1);
                }
                else{
                    val=0;
                    while(st.top()!=-1){
                        val+=st.top();
                        st.pop();
                    }
                    st.pop();
                    st.push(2*val);
                }
            }
        }
        while(!st.empty()){ 
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};