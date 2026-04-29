class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int cnt=0;
        int prev=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==prev) continue;
            if(nums[i]< prev){
                cnt+=i;
            }
            prev=nums[i];
        }
        return cnt;
    }
};