class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int sum=0;
        for(int x : rolls) sum+=x;
        int n_sum=(mean*(n+m))-sum;
        if(n_sum > 6*n || n_sum <n){
            return {};
        }
        int val=n_sum/n;
        int rem=n_sum%n;
        vector<int> ans(n,val);
        for(int i=0;i<rem;i++){
            ans[i]++;
        }
        return ans;
    }
};