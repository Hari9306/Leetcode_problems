class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int pro=1;
        int cnt=0;
        int right=0,left=0;
        while(right < n){
            pro*=nums[right];
            while(pro >=k && left <= right){
                pro/=nums[left];
                left++;
            }
            cnt+=(right-left+1);
            right++;
        }
        return cnt;
    }
};