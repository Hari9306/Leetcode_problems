class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<col;i++){
            int k=0;
            for(int j=0;j<row;j++){
             k=max(k,matrix[j][i]);
            }
            for(int j=0;j<row;j++){
                if(matrix[j][i]==-1){
                    matrix[j][i]=k;
                }
            }
        }
        return matrix;
    }
};