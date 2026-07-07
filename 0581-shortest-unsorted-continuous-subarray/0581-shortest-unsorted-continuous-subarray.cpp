class Solution { 
public: 
    int findUnsortedSubarray(vector<int>& nums) { 
        int n = nums.size();
        int maxi= INT_MIN;
        int mini= INT_MAX;
        int r= -1;
        int l= 0;
        for(int i = 0; i < n; i++) {
            maxi= max(maxi, nums[i]);
            if(nums[i] < maxi) {
                r=i;
            }
        }
        for(int i = n - 1; i >= 0; i--) {
            mini= min(mini, nums[i]);
            if(nums[i] > mini) {
                l=i;
            }
        }

        return (r==-1) ? 0:r-l+1;
    } 
};
