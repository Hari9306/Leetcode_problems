class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> res(n);
        for(int j=0;j<n;j++){
            int i=0,k=j;
            bool flag=false;
            while(i < m){
                if(grid[i][k]==1){
                    if(k + 1 >= n || grid[i][k+1]==-1){
                        flag=true;
                        break;
                    }
                    else {
                        i++;
                        k++;
                    }
                }
                else{
                    if(k-1 < 0 || grid[i][k-1]==1){
                        flag=true;
                        break;
                    }
                    else {
                        i++;
                        k--;
                    }
                }  
            }
            if(flag){
                res[j]=-1;
            }
            else {
                res[j]=k;
            }
        }
        return res;
    }
};