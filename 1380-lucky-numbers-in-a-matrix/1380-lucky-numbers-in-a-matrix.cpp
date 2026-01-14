class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>res;
        for(int i=0;i<n;i++){
            int min_val=INT_MAX;
            int col=-1;
            for(int j=0;j<m;j++){
                if(matrix[i][j] < min_val){
                    min_val=matrix[i][j];
                    col=j;
                }
            }
            bool flag=true;
            for(int k=0;k<n;k++){
                if(matrix[k][col] > min_val){
                    flag=false;
                    break;
                }
            }
            if(flag) res.push_back(min_val);
        }
        return res;
    }
};