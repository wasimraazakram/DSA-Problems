class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        int time=0;

       for(int i=0;i<tickets.size();i++){
           q.push(i);
       }

       while(tickets[k]!=0){
           int curr=q.front();
           time++;
           tickets[curr]--;
           q.pop();
           if(tickets[curr]!=0){
               q.push(curr);
           }
       }
       return time;
    }
};