class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int max_diff=0;
        int diff=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<nums[j]){
                    max_diff=nums[j]-nums[i];
                    diff=max(max_diff,diff);
                }
            }
        }
        if(diff==0){
            return -1;
        }
        return diff;
    }
};