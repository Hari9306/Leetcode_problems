class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        // vector<vector<int>> cmp(n,vector<int>(m,0));
        int dx[8]={-1,-1,-1,0,0,1,1,1};
        int dy[8]={-1,0,1,-1,1,-1,0,1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int live=0;
                for(int k=0;k<8;k++){
                    int nr=i+dx[k];
                    int nc=j+dy[k];
                    if(nr >=0 && nc>=0 && nr<n && nc<m && (board[nr][nc]==1  || board[nr][nc]==3)){
                        live++;
                    }
                }
                if(board[i][j]){
                    if(live>=2 && live<=3) board[i][j]=3;
                }
                else{ 
                    if(live==3)board[i][j]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==2 || board[i][j]==3) board[i][j]=1;
                else board[i][j]=0;
            }
        }
    }
};
// less than  2 is dies
// 2 to 3 lives 
// greater than 3 dies
// a died cell -> live if 3 live around him 