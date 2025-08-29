class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            maxi=max(maxi,i+nums[i]);
            if(nums[i]==0 &&i==n-1) return true;
            if(maxi<=i) return false;
        }
        return true;
    }
};