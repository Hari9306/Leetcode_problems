class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            vector<int>dp(n+1);
            for(int j=0;j<n;j++){
                if(dp[matrix[i][j]]==0){
                    dp[matrix[i][j]]++;
                }
                else{
                    return false;
                }
            }
        }
         for(int i=0;i<n;i++){
            vector<int>dp(n+1);
            for(int j=0;j<n;j++){
                if(dp[matrix[j][i]]==0){
                    dp[matrix[j][i]]++;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};