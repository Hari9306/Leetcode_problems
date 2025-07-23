class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        int res=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]>=2){
                res=nums[i];
            }
        }
        return res;
    }
};