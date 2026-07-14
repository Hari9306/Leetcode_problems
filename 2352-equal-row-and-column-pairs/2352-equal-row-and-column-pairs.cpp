class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        map<vector<int>,int>mpp;
        for(auto x : grid){
            mpp[x]++;
        }
        int cnt=0;
        for(int j=0;j<n;j++){
            vector<int> temp;
            for(int i=0;i<n;i++){
                temp.push_back(grid[i][j]);
            }
            if(mpp.find(temp)!=mpp.end()){
                cnt+=mpp[temp];
            }
        }
        return cnt;
    }
};