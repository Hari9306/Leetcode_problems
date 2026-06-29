class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long sum=0;
        for(int i=n-1;i>n-k-1;i--){
            if(mul!=0){
                sum+=(1ll*nums[i]*mul);
                mul--;
            }
            else {
                sum+=nums[i];
            }
        }
        return sum;
    }
};