class Solution {
public:
    int minimumSum(int num) {
      vector<int>digits(4);

      for(int i=0;i<digits.size();i++){
          digits[i]=num%10;
          num=num/10;
      }
      sort(digits.begin(),digits.end());
      int ans=(digits[0]+digits[1])*10+digits[2]+digits[3];
      return ans;
    }
};