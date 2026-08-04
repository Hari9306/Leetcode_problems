class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        vector<int> ans;
        int val = nums[0];
        int i = 0;
        while (i < nums.size()) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                i++;
                continue;
            }
            if (nums[i] == val) {
                val++;
                i++;
            } else {
                while (val < nums[i]) {
                    ans.push_back(val);
                    val++;
                }
                val = nums[i] + 1;
                i++;
            }
        }
        
        return ans;
    }
};