class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n=arr.size();
        int max_len=0;
        vector<vector<int>> dp(n,vector<int>(n,2));
        for(int i=2;i<n;i++){
            for(int j=i-1;j>=0;j--){
                int need=arr[i]-arr[j];
                int l=0,r=j-1;
                while(l <= r){
                    int mid=(l+r) >> 1;
                    if(arr[mid]==need){
                        dp[j][i]=dp[mid][j]+1;
                        max_len=max(max_len,dp[j][i]);
                        break;
                    }
                    else if(arr[mid] < need)l=mid+1;
                    else r=mid-1;
                }
            }
        }
        return max_len >= 3 ? max_len : 0;
    }
};