class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> arr(2,0);
        int max=0;
        for(int i=0;i<mat.size();i++){
            int cnt=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    cnt++;
                }
            }
            if(cnt>max){
                max=cnt;
                arr[0]=i;
                arr[1]=cnt;
            }
        }
        return arr;
    }
};