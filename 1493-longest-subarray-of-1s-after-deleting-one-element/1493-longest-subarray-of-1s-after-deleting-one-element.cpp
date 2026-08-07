class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_len=0;
        int l=0;
        int zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            while(zero > 1){
                if(nums[l]==0) zero--;
                l++;
            }
            max_len=max(max_len,i-l);
        }
        return max_len;
    }
};