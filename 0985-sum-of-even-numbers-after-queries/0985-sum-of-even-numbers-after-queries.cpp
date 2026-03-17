class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int>ans(n);
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                sum+=nums[i];
            }
        }
        int i=0;
        for(auto it :queries){
            int val=it[0];
            int idx=it[1];
            if(nums[idx]%2==0){
                sum-=nums[idx];
            }
            nums[idx]=nums[idx]+val;
            if(nums[idx]%2==0){
            sum+=nums[idx];
            }
            ans[i]=sum;
            i++;
        }
        return ans;
    }
};