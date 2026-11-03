class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        for(auto x : nums){
            maxi=max(maxi,x);
            sum += x;
        }
        return (nums.size()*maxi) - sum ;
    }
};