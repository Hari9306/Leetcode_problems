class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            vector<int>row(10),col(10);
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    if(row[board[i][j]-'0']++) return false;
                }
                if(board[j][i]!='.'){
                        if(col[board[j][i]-'0']++) return false;
                }
            }
        }
        for(int row=0;row<9;row+=3){
            for(int col=0;col<9;col+=3){
                vector<int>freq(10);
                for(int i=row;i<row+3;i++){
                    for(int j=col;j<col+3;j++){
                        if(board[i][j]!='.'){
                            if(freq[board[i][j]-'0']++) return false;
                         }
                    }
                }
            }
        }
        return true;
    }
};