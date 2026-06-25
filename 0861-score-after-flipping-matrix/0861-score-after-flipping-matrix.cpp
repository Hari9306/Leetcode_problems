class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int j=0;
        for(int i=0;i<n;i++){
            if(grid[i][j]==0){
                for(int k=0;k<m;k++){
                    grid[i][k]=grid[i][k]== 1 ? 0 : 1;
                }
            }
        }
        for(int i=0;i<m;i++){
            int zero=0;
            int one=0;
            for(int j=0;j<n;j++){
                if(grid[j][i]) one++;
                else zero++;
            }
            if(zero > one){
                for(int j=0;j<n;j++){
                    grid[j][i]=grid[j][i]== 1 ? 0 : 1;
                }
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            int val=0;
            int power=0;
            for(int j=m-1;j>=0;j--){
                if(grid[i][j]==1) {
                    val +=(pow(2,power));
                    power++; 
                }
                else {
                    power++;
                }
            }
            sum+=val;
        }
        return sum ;
    }
};