class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<3) return -1;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=1;i--){
            if(nums[i]!=nums[i-1]){
                return nums[i-1];
            }
        }
        return -1;
    }
};