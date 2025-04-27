class Solution {
public:
    vector<int> stableMountains(vector<int>& nums, int threshold) {
        vector<int>v;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>threshold){
                v.push_back(i);
            }
        }
        return v;
    }
};