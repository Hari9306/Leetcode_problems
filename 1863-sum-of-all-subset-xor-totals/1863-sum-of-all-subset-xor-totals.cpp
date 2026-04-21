class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for (int mask = 0; mask < (1 << n); mask++) {
            int xr = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    xr ^= nums[i];
                }
            }
            sum += xr;
        }
        return sum;
    }
};