class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int xorr=0;
        for(auto x : nums) xorr = xorr ^ x ;
        return xorr ;
    }
};