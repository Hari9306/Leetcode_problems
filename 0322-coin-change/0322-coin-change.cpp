class Solution {
public:
    int rec(vector<int>& coins,vector<int>&dp,int amount){
        if(amount==0) return 0;
        if(amount <0) return INT_MAX;
        if(dp[amount]!=-1) return dp[amount];
        int cnt=INT_MAX;
        for(int i=0;i<coins.size();i++){
            int x=rec(coins,dp,amount-coins[i]);
            if(x!=INT_MAX)cnt=min(cnt,x+1);
        }
        return dp[amount]=cnt;
    }
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)  return 0;
        vector<int> dp(amount+1,-1);
        rec(coins,dp,amount);
        if(dp[amount]==INT_MAX) return -1;
        return dp[amount];
    }
};