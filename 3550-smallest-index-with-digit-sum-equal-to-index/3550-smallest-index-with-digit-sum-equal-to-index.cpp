class Solution {
public:
    int Sum(int x){
        int ans = 0;
        while(x > 0){
            ans += (x%10);
            x/=10;
        }
        return ans;
    }
    int smallestIndex(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum = Sum(nums[i]);
            if(sum==i){
                ans=min(i,ans);
            }
        }
        return ans==INT_MAX ? -1 : ans;
    }
};