class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        long long ans = 0;
        int n=nums.size();
        int prev=nums[0],pidx=0;
        for(int i=1;i<n-1;i++){
            if(nums[i] > prev){
                ans += 1ll*(i-pidx) * prev;
                prev=nums[i];
                pidx=i;
            }
        }
        ans += 1ll*(n-1-pidx) * prev;
        return ans;
    }
};