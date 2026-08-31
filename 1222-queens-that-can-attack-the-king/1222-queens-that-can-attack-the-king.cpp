class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>> board(8,vector<int>(8,0));
        board[king[0]][king[1]]=1;
        for(auto x : queens){
            board[x[0]][x[1]]=2;
        }   
        int dx[8]={-1,-1,-1,0,0,1,1,1};
        int dy[8]={-1,0,1,-1,1,-1,0,1};
        // for(int i=0;i<7;i++){
        //     for(int j=0;j<7;j++){
        //         cout<< i <<  j << " ";
        //     }
        //     cout<< endl;
        // }
        vector<vector<int>> ans;
        for(int i=0;i<8;i++){
            int x=king[0];
            int y=king[1];
            int nr=dx[i];
            int nc=dy[i];
            while(x+nr>=0 && y+nc >=0 && x+nr < 8 && y+nc <8 && board[x+nr][y+nc]!=2){
                x+=dx[i];
                y+=dy[i];
            }
            if(x+nr>=0 && y+nc >=0 && x+nr < 8 && y+nc <8 && board[x+nr][y+nc]==2) ans.push_back({x+nr,y+nc});
        }
        return ans;
    }
};