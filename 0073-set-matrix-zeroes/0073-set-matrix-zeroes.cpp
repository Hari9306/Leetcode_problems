class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> a;
         int col=matrix[0].size();
        int row=matrix.size();
        for(int i=0;i<row;i++){
            vector<int>b;
          for(int j=0;j<col;j++){
            b.push_back(matrix[i][j]);
          }
          a.push_back(b);
        }
       
        for(int i=0;i<row;i++){
          for(int j=0;j<col;j++){
            if(matrix[i][j]==0){
                int k=0;
                while(k<col){
                    a[i][k]=0;
                    k++;
                }
                int l=0;
                while(l<row){
                    a[l][j]=0;
                    l++;
                }
            }
          }
        }
         for(int i=0;i<row;i++){
          
          for(int j=0;j<col;j++){
           matrix[i][j]=a[i][j];
          }
       
        }
        return ;
    }
};