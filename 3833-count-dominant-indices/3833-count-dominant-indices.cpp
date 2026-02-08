class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        double avg=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            sum-=nums[i];
            avg=(double)sum/(n-i-1);
            if(nums[i] >avg) cnt++;
        }

        return cnt;
    }
};