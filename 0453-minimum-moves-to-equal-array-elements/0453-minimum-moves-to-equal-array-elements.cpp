class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int sum=0,mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            mini=min(mini,nums[i]);
        }
        return (sum-(n*mini));
    }
};

// 1 2 3 4 5 6 
// 2 3 4 5 6 6 
// 3 4 5 6 7 6 
// 4 5 6 7 7 7 
// 5 6 7 8 8 7 
// 6 7 8 9 8 8 
// 7 8 9 9 9 9 
// 8 9 9 10 10 10 
// 9 10 10 11 11 10 
// 10 11 11 12 11 11 
// 11 12 12 12 12 12 
// 12 12 13 13 13 13
// 13 13 14 14 14 13
// 14 14 15 15 14 14 
// 15 15 15 16 15 15 
// 16 16 16 16 16 16 