class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        int tot=m*n;
        k%=tot;
        vector<vector<int>> ans(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int oidx=i*m+j;
                int nidx=(oidx+k)%tot;
                ans[nidx/m][nidx%m]=grid[i][j];
            }
        }
        return ans;
    }
};