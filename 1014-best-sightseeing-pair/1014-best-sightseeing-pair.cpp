class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        vector<int> dp(n,0);
        dp[0]=values[0];
        int ans=INT_MIN;
        for(int i=1;i<n;i++){
            dp[i]=max(dp[i-1],i+values[i]);
            ans = max(ans , dp[i-1]+values[i]-i);
        }
        return ans;
    }
};