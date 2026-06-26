class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n));
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
        int val=1;
        while(val <= n*n){
            for(int i=left;i<=right;i++){
                res[top][i]=val;
                val++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                res[i][right]=val;
                val++;
            }
            right--;
            if(top<=bottom){
                for(int j=right;j>=left;j--){
                    res[bottom][j]=val;
                    val++;
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    res[i][left]=val;
                    val++;
                }
                left++;
            }
        }
        return res;
    }
};