class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long long> cmp;
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                cmp.push_back(sum);
            }
        }
        sort(cmp.begin(),cmp.end());
        long long ans=0; 
        int MOD=1e9+7;   
        for(int i=left-1;i<right;i++){
            ans+=cmp[i];
        }
        return ans%MOD;
    }
};