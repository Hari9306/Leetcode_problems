class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        int idx=0;
        int max_val=nums[0];
        long long ans=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>=max_val){
                ans+=(i-idx) *1ll*max_val;
                max_val=nums[i];
                idx=i;
            }
        }
        ans+=(n-1-idx)*1ll*max_val;
        return ans;
    }
};