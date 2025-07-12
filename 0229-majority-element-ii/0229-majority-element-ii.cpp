class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int n=nums.size()/3;
        for(auto it:mpp){
           int ele=it.first;
           int count=it.second;
            if(count>n){
                ans.push_back(ele);
            }
        }
        return ans;
    }
};