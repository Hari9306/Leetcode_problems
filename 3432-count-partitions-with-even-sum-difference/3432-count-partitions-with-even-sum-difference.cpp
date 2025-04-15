class Solution {
public:
    int countPartitions(vector<int>& nums) {
       int cnt = 0;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) { 
            int leftSum = 0;
            int rightSum = 0;
            for (int j = 0; j <= i; j++) {
                leftSum += nums[j];
            }
            for (int j = i + 1; j < n; j++) {
                rightSum += nums[j];
            }
            if (abs(leftSum - rightSum) % 2 == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};