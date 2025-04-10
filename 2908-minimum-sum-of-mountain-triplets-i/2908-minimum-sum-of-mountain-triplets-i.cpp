class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        int min=160;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                if(nums[i]<nums[j])
                for(int k=j+1;k<n;k++){
                    if(min>nums[i]+nums[j]+nums[k]&&nums[k]<nums[j]){
                        
                        min=nums[i]+nums[j]+nums[k];
                    }
                }
            }
        }
        if(min!=160){
            return min;
        }
        return -1;
    }
};