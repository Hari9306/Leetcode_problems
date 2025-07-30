class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max_sum=INT_MIN;
        for(int i=0;i<nums.size()/2;i++){
            int ele=(nums[i]+nums[nums.size()-i-1]);
            if(ele>max_sum){
                max_sum=ele;
            }
        }
        return max_sum;
    }
};