class Solution {
public:
    int GetSum(int n){
        int sum=0;
        while(n > 0){
            sum+=(n%10);
            n/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,priority_queue<int>>mpp;
        int ans=-1;
        for(int i=0;i<n;i++){
            int val=GetSum(nums[i]);
            mpp[val].push(nums[i]);
            if(mpp[val].size() >= 2){
                int a=mpp[val].top();mpp[val].pop();
                int b=mpp[val].top();mpp[val].pop();
                ans=max(ans,a+b);
                mpp[val].push(a);
                mpp[val].push(b);
            }
        } 
        return ans;
    }
};