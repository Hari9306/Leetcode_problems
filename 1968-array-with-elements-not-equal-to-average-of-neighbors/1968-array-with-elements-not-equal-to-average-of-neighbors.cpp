class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>v;
        sort(nums.begin(),nums.end(),greater<int>());
        int y=nums[nums.size()/2];
        for(int i=0;i<nums.size()/2;i++){
         v.push_back(nums[i]);
         v.push_back(nums[nums.size()-i-1]);
        }
          if(nums.size()%2!=0){
             v.push_back(y);
          }
        return v;
    }
};