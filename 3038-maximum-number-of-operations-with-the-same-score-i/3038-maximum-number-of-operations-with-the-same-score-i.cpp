class Solution {
public:
    int maxOperations(vector<int>& nums) {
        if(nums.size()==2)return 1;
        int cnt=1;
        int sum=0;
        int max=nums[0]+nums[1];
        for(int i=2;i<nums.size()-1;i++){
             sum=nums[i]+nums[i+1];
             if(sum==max){
             cnt++;
             }
             else{
                break;
             }
        }
        return cnt;
    }
};