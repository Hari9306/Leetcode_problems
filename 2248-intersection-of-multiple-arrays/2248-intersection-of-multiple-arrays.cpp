class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
            mpp[nums[i][j]]++;
            }
        }
        vector<int>res;
        for(auto it:mpp){
            if(it.second==nums.size()){
                res.push_back(it.first);
            }
        }
        return res;
    }
};