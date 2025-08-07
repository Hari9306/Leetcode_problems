class Solution {
public:
    int minMoves2(vector<int>& nums) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       int mid=(n-1)/2;
       int sum=0;
       for(int i=0;i<n;i++){
        sum+=abs(nums[i]-nums[mid]);
       }
       return sum;
    }
};