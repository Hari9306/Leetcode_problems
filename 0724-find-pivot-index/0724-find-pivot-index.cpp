class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tot=0;
        for(int i=0;i<nums.size();i++) tot+=nums[i];
        int rsum=0;
        for(int i=0;i<nums.size();i++){
            tot-=nums[i];
            if(tot==rsum) return i;
             rsum+=nums[i];
        }
        return -1;
    }
};