class Solution {
public:
    bool check(vector<string>& board,int row,int col,int n){
        for(int i=0;i<row;i++){
            if(board[i][col]=='Q') return false;
        }
        for(int r=row-1,c=col-1; r>=0 && c>=0 ; r--,c--){
            if(board[r][c]=='Q') return false;
        }
        for(int r=row-1,c=col+1;r>=0 && c<n;r--,c++){
            if(board[r][c]=='Q') return false;
        }
        return true;
    }
    void rec(int n,int row,vector<string>&board,vector<vector<string>> &ans){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++){
            if(check(board,row,i,n)){
                board[row][i]='Q';
                rec(n,row+1,board,ans);
                board[row][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>>ans;
        rec(n,0,board,ans);
        return ans;
    }
};