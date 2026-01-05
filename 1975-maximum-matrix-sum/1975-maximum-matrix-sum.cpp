class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        long long sum=0;
        long long Ncnt=0;
        long long mini=LLONG_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]< 0) Ncnt++; 
                long long val = abs(matrix[i][j]);
                sum+=val;
                mini=min(mini,val);
            }
        }
        if(Ncnt & 1) return sum- 2*mini;
        return sum;
    }
};