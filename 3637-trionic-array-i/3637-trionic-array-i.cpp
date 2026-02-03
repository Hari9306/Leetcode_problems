class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        if(n <= 3) return false;
        if(nums[0] >= nums[1]) return false;
        int i=1;
        while(i<n && nums[i-1] <nums[i]) i++;
        if(i>=n-1 || nums[i-1] == nums[i]) return false;
        while(i<n && nums[i-1] > nums[i]) i++;
        if(i>=n || nums[i-1] == nums[i]) return false;
        while(i<n && nums[i-1]<nums[i])i++;
        if(i==n) return true;
        return false;
    }
};