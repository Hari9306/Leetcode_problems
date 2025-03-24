class Solution {
public:
    int distinctAverages(vector<int>& nums) {
          sort(nums.begin(), nums.end());
        set<float> avgSet;
        int n = nums.size();
        
        for(int i = 0; i < n / 2; i++) {
            float avgg = (nums[i] + nums[n - i - 1]) / 2.0;
            avgSet.insert(avgg);
        }

        return avgSet.size();
    }
};