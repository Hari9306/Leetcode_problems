class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int ones=0,ans=0;
        int n=nums.length;
        for(int i=0;i<n;i++){
            if(nums[i]==1)ones++;
            else ones=0;
            ans=Math.max(ones,ans);
        }
        return ans;
    }
}