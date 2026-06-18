class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int r_cnt=0;
        for(int i=0;i<row;i++){
            int l=0,r=col-1;
            while(l < r){
                if(grid[i][l]!=grid[i][r]) r_cnt++;
                l++;
                r--;
            }
        }
        int c_cnt=0;
        for(int i=0;i<col;i++){
            int l=0,r=row-1;
            while(l<r){
                if(grid[l][i]!=grid[r][i]) c_cnt++;
                l++;
                r--;
            }
        }
        return min(r_cnt,c_cnt);
    }
};