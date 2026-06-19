class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>diff(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            int zero=0;
            int one=0;
            for(auto x : grid[i]){
                if(x==0) zero++;
                else one++;
            }
            for(int j=0;j<m;j++){
                diff[i][j]+=one-zero;
            }
        }
        for(int j=0;j<m;j++){
            int zero=0;
            int one=0;
            for(int i=0;i<n;i++){
                if(grid[i][j]==0) zero++;
                else one++;
            }
            for(int i=0;i<n;i++){
                diff[i][j]+=(one-zero);
            }
        }
        return diff;
    }
};