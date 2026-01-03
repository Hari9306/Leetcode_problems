class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        long long sum=0;
        int ans=INT_MAX;
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==1) sum+=nums[i];
            while(sum>=k && j<=i){
                ans=min(ans,i-j+1);
                mpp[nums[j]]--;
                if(mpp[nums[j]]==0) sum-=nums[j];
                j++;
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};