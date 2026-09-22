class Solution {
public:
    int dx[4]={-1,0,0,1};
    int dy[4]={0,-1,1,0};
    bool dfs(vector<vector<char>>& board,string &word,int i,int j,int idx,vector<vector<bool>> &vis,int n,int m){
        if(idx==word.size()){
            return true;
        }
        for(int k=0;k<4;k++){
            int nr=i+dx[k];
            int nc=j+dy[k];
            if(nr >=0 && nc>=0 && nr <n && nc <m && !vis[nr][nc] && board[nr][nc]==word[idx]){
                vis[nr][nc]=true;
                if(dfs(board,word,nr,nc,idx+1,vis,n,m)) return true;
                vis[nr][nc]=false;
            }
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    vis[i][j]=true;
                    bool ans = dfs(board,word,i,j,1,vis,n,m);
                    vis[i][j]=false;
                    if(ans) return true;
                }
            }
        }
        return false;
    }
};