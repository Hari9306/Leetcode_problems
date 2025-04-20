class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-nums.size()/2];
    }
};