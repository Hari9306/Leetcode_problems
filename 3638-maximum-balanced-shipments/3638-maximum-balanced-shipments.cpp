class Solution {
public:
    int maxBalancedShipments(vector<int>& nums) {
        int cnt=0;
        int max_ele=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<max_ele){
                cnt++;
                if(i<nums.size()-1){
                max_ele=nums[i+1];
                }
            }
            else if(max_ele<nums[i]){
                max_ele=nums[i];
            }
        }
        return cnt;
    }
};