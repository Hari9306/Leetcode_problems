class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxi = 1, mx = 1;
        int mini = 1, mi = 1;
        for(int i = 1; i < n; i++) {
            if(nums[i] > nums[i-1]) {
                mx++;
            }
            else {
                maxi = max(maxi, mx);
                mx = 1;
            }
        }
        maxi = max(maxi, mx);
        for(int i = 1; i < n; i++) {
            if(nums[i] < nums[i-1]) {
                mi++;
            }
            else {
                mini = max(mini, mi);
                mi = 1;
            }
        }
        mini = max(mini, mi);
        return max(maxi, mini);
    }
};