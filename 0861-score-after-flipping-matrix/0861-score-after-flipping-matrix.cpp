class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            if(grid[i][0]==0){
                for(int j=0;j<grid[0].size();j++){
                    if(grid[i][j]==0){
                        grid[i][j]=1;
                    }
                    else{
                        grid[i][j]=0;
                    }
                }
            }
        }
        
            for(int j=0;j<grid[0].size();j++){
                int ones=0;
                for(int i=0;i<grid.size();i++){
                    if(grid[i][j]==1) ones++;
                }
                if(ones<grid.size()-ones){
                    for (int i = 0; i < grid.size(); i++) {
                    grid[i][j] = 1 - grid[i][j]; 
                }
                }
            }
         int sum = 0;
        for (int i = 0; i < grid.size(); i++) {
            int rowVal = 0;
            for (int j = 0; j < grid[0].size(); j++) {
                rowVal = (rowVal << 1) + grid[i][j]; 
            }
            sum += rowVal;
        }
        return sum;
    }
};