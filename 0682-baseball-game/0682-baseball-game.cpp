class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>st;
        int ans=0;

       for(auto i:ops){
            if(i=="+")
            {
            int v1=st.top();
            st.pop();
            int v2=st.top();
            st.push(v1);
            st.push(v1+v2);
            }
            else if(i=="D"){
                st.push(st.top()*2);
            } 
            else if(i=="C"){
              st.pop();
            }
            else
            st.push(stoi(i));
        }
      
          while(!st.empty()){
              ans+=st.top();
              st.pop();
          }
         
       
       return ans;
    }
};