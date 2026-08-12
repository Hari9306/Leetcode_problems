class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int max_len=0;
        unordered_map<int,int> mpp;
        int l=0;
        for(int r=0;r<nums.size();r++){
            if(mpp[nums[r]]  < k ){
                mpp[nums[r]]++;
                max_len=max(max_len,r-l+1);
            }
            else{
                mpp[nums[r]]++;
                while(mpp[nums[r]]>k){
                    mpp[nums[l]]--;
                    l++;
                }
            }
            max_len=max(max_len,r-l+1);
        }
        return max_len;
    }
};