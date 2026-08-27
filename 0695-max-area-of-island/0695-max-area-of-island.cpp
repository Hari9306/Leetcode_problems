class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int max_area=0;
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        int dx[4]={-1,0,0,1};
        int dy[4]={0,1,-1,0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] && !vis[i][j]){
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    vis[i][j]=true;
                    int area=1;
                    while(!q.empty()){
                        int r=q.front().first;
                        int c=q.front().second;
                        q.pop();
                        for(int i=0;i<4;i++){
                            int nr=r+dx[i];
                            int nc=c+dy[i];
                            if(nr>=0 && nc>=0 && nr<n && nc<m && grid[nr][nc] && !vis[nr][nc]){
                                area++;
                                q.push({nr,nc});
                                vis[nr][nc]=true;
                            }
                        }
                    }
                    max_area=max(max_area,area);
                }
            }
        }
        return max_area;
    }
};