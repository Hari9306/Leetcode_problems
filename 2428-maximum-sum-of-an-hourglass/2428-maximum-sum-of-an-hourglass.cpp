class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int max_sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i+2 < n && j+2 < m){
                    int sum=0;
                    sum += grid[i][j]+grid[i][j+1]+grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2];
                    max_sum=max(max_sum,sum);
                }
            }
        }
        return max_sum;
    }
};