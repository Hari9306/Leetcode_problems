class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>v;
        for(int val:nums){
            v[val]++;
        }
        for(auto &[val,cnt]:v){
            if(cnt>2){
                return false;
            }
        }
        return 1;
    }
};