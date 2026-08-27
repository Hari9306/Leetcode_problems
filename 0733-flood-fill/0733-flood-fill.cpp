class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        queue<pair<int,int>> q;
        q.push({sr,sc});
        int clr=image[sr][sc];
        image[sr][sc]=color;
        int dx[4]={-1,0,0,1};
        int dy[4]={0,1,-1,0};
        vector<vector<bool>>vis(n,vector<bool>(m,false)) ;
        vis[sr][sc]=true;
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+dx[i];
                int nc=c+dy[i];
                if(nr>=0 && nc>=0 && nr<n && nc < m && image[nr][nc]==clr && !vis[nr][nc]){
                    vis[nr][nc]=true;
                    image[nr][nc]=color;
                    q.push({nr,nc});
                }
            }
        }
        return image;
    }
};