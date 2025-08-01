class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int start=0,end=nums.size()-1;
        while(start<end){
            int mid=start-(start-end)/2;
            if(nums[mid]>nums[end]){
                start=mid+1;
            }
            else if(nums[mid]<nums[end]){
                end=mid;
            }
            else{
                end=end-1;
            }
        }
        return nums[start];
    }
};