class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        vector<int> cmp(n+1,0);
        for(auto it : banned){
            if(it <=n) cmp[it]=1;
        }
        int cnt=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            if(cmp[i]) continue; 
            if(sum+i <= maxSum){
                cnt++;
                sum+=i;
            }
            else {
                break;
            }
        }
        return cnt;
    }
};