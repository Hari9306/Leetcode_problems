class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> row(m,0);
        vector<int>col(n,0);
        for(int i=0;i< indices.size();i++){
            row[indices[i][0]]++;
            col[indices[i][1]]++;
        }
        int cnt=0;
        for(int i=0;i< m;i++){
            for(int j= 0 ;j< n;j++){
                if((row[i]+col[j]) &1) cnt++;
            }
        }
        return cnt;
    }
};