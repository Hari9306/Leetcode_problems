class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     vector<int>v;
     sort(nums.begin(),nums.end());
     for(int i=0;i<nums.size();i++){
        if((i+1<nums.size())&&nums[i]==nums[i+1]){
            v.push_back(nums[i]);
        }
     }   
     return v;
    }
};