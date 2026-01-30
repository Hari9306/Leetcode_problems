class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        long long sum=0;
        int  left=0;
        int right=0;
        long long cnt=0;
        while(right <  n){
            sum+=nums[right];
            while(sum*(right-left+1) >=k && left <=right){
                sum-=nums[left];
                left++;
            }
            cnt+=(right-left+1);
            right++;
           
        }
        return cnt;
    }
};