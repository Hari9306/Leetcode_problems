class Solution {
public:
    long long rec(long long n,unordered_map<long long,int> &dp){
        if(n==1) {
            return 0;
        }
        if(dp.find(n)!=dp.end()) {
            return dp[n];
        }
        long long  op1=INT_MAX;
        long long op2=INT_MAX;
        if(n&1){
             op1=1+min(rec(n-1,dp),rec(n+1,dp));
        }
        if(n%2==0){
            op2=1+rec(n/2,dp);
        }
        return dp[n]=min(op1,op2);
    }
    int integerReplacement(int n) {
        unordered_map<long long,int> dp;
        rec(n,dp);
        return dp[n];
    }
};