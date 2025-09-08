class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>vec(2*nums.size());
        for(int i=0;i<nums.size();i++){
            vec[i]=nums[i];
            vec[i+nums.size()]=nums[i];
        }
        return vec;
    }
};