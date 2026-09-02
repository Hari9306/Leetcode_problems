class Solution {
public:
    int GCD(int a,int b){
        if(b==0) return a;
        return GCD(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(auto x : nums){
            if(x < mini) mini=x;
            if(x > maxi) maxi=x;
        }
        return GCD(mini,maxi);
    }
};