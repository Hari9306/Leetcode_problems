class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> res;
        int x=0;
        for(int bit : nums){
            x=(x*2+bit) % 5;
            res.push_back(x==0);
        }
        return res;

    }
};