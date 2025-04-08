class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        if(nums.size()<4){
            return 0;
        }
        int n=nums.size();
       sort(nums.begin(),nums.end());
       return ((nums[n-1]*nums[n-2])-(nums[0]*nums[1]));
    }
};