class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> ans(n);
        long long  maxi=0;
        long long pref=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,(long long )nums[i]);
            pref+=nums[i]+maxi;
            ans[i]=pref;
        }
        return ans;
    }
};