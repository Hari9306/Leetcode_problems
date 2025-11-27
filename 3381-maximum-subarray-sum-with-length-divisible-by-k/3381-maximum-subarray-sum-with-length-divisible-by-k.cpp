class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        long long max_val=0;
       vector<long long> minprefix(k,LLONG_MAX);
       long long prefix=0;
       long long ans= LLONG_MIN;
       minprefix[0]=0;
       for(int i=0 ;i< nums.size();i++){
        prefix+=nums[i];
        int mod=((i+1)%k);
        if(minprefix[mod]!=LLONG_MAX){
            ans=max(ans,prefix - minprefix[mod]);
        }
        minprefix[mod]=min(minprefix[mod],prefix);
       }
       return ans;
    }
};