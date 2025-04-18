class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
      int n=accounts[0].size();
      int max_wealth=0;
      for(int i=0;i<accounts.size();i++){
        int sum=0;
         for(int j=0;j<n;j++){
            sum+=accounts[i][j];
         }
          max_wealth=max(max_wealth,sum);
      }  
      return max_wealth;
    }
};