class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int max_gap=0;
        int gap=0;
        for(int i=nums.size()-1;i>=1;i=i-1){
            gap=nums[i]-nums[i-1];
            max_gap=max(max_gap,gap);
        }
        return max_gap;
    }
};