class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       unordered_map<int,int>mpp;
       for(auto it:nums){
            mpp[it]++;
       }
       vector<int>v;
       for(auto it:mpp){
        if(it.second>1){
            v.push_back(it.first);
        }
       }
       return v;
    }
};