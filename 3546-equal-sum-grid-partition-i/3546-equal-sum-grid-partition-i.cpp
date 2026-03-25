class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n= grid.size();
        int m=grid[0].size();
        long long total_sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                total_sum+=grid[i][j];
            }
        }
        long long row=0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m;j++){
                row+=grid[i][j];
            }
            if(row*2==total_sum) return true;
        }
        long long col=0;
        for(int j=0;j<m-1;j++){
            for(int i=0;i<n;i++){
                col+=grid[i][j];
            }
            if(col*2==total_sum) return true;
        }
        return false;
    }
};