class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=nums.size();
        vector<int> pref(n+1,0);
        pref[0]=nums[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]^nums[i];
        }
        int k= (1 << maximumBit) -1;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            // cout << pref[i]<< " ";
            ans[i]=pref[n-i-1]^k;
        }
        return ans;
    }
};