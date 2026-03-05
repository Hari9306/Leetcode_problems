class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        int mod=1e9+7;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(k--){
            int val=pq.top();
            pq.pop();
            pq.push(val+1);
        }
        long long ans=1;
        while(!pq.empty()){
            ans=(1LL*ans*pq.top())%mod;
            pq.pop();
        }
        return ans;
    }
};