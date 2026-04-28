class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> val;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                val.push_back(grid[i][j]);
            }
        }
        sort(val.begin(),val.end());
        if(val.size()==1){
            return 0;
        }
        int cnt=0;
        int k=val.size();
        int tar=val[k/2];
        for(int i=0;i<k;i++){
            if(val[i]%x!=tar%x) return -1;
            cnt+=abs(tar-val[i])/x;
        }
        return cnt;
    }
};