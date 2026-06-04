class Solution {
public:
    void  rec(int idx,vector<vector<int>>& ans,vector<int> &res,int n,vector<int>& nums){
        if(idx >= n){
            ans.push_back(res);
            return ;
        }
        res.push_back(nums[idx]);
        //pick 
        rec(idx+1,ans,res,n,nums);
        res.pop_back();
        //non-pick 
        while(idx +1 <n && nums[idx]==nums[idx+1]){
            idx++;
        }
        rec(idx+1,ans,res,n,nums);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        int idx=0;
        vector<vector<int>> ans;
        vector<int>res;
        sort(nums.begin(),nums.end());
        rec(idx,ans,res,n,nums);
        return ans;
    }
};