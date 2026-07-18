class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(auto x : nums){
            if(x > maxi){
                maxi=x;
            }
            if(x < mini){
                mini=x;
            }
        }
        return gcd(maxi,mini);
    }
};