class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long ans =0;
        int st= n/3;
        for(int i=st;i<n;i+=2){
            ans  += nums[i];
        }
        return ans;
    }
};