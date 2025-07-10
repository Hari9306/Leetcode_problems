class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,rig=nums.size()-1;
        while(left<=rig){
            int mid=(left+rig)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>=nums[left]){
                if(nums[left]<=target&&target<=nums[mid]){
                    rig=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            else{
                if(nums[mid]<=target&&target<=nums[rig]){
                    left=mid+1;
                }
                else{
                    rig=mid-1;
                }
            }
        }
        return -1;
    }
};