class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
      int carry=0;
      vector<int> a;
      for(int i=num.size()-1;i>=0;i--){
        carry+=num[i]+(k%10);
        k=k/10;
        a.push_back(carry%10);
        carry/=10;
      }
      if(k!=0){
        while(k!=0){
            int u=k%10+carry;
            a.push_back(u%10);
            carry=u/10;
            
            k=k/10;
        }
      }
      if(carry!=0){
      a.push_back(carry);
      }
      reverse(a.begin(),a.end());
      return a;
    }
};