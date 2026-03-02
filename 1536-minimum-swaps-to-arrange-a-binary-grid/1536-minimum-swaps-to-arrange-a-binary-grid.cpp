class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>cmp(n);
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=n-1;j>=0;j--){
                if(grid[i][j]==0) cnt++;
                else {
                    break;
                }
            }
            cmp[i]=cnt;
        }
        int scnt=0;
        for(int i=0;i<n;i++){
            int need=n-i-1;
            int j=i;
            while(j<n && cmp[j]<need)j++;
            if(j==n) return -1;
            while(j >i) {
                swap(cmp[j],cmp[j-1]);
                j--;
                scnt++;
            }
        }
        return scnt;
    }
};