class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            for(int j = 1 ;j*j<=n;j++){
                int square=j*j;
                if(i- square >= 0){
                    dp[i]=min(dp[i],1+dp[i-square]);
                }
                else break;
            }
        }
        return dp[n];
    }
};
// 12 
// 0 - - - - - - - - - - - - 
// 0 