class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int sum=0,min_req=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            min_req=min(min_req,nums[i]);
        }
        return (sum-(n*min_req));
    }
};