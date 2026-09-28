class Solution {
public:
    void rec(int idx,int n,vector<int>& nums,vector<int> res,vector<vector<int>>& ans){
        if(idx==n){
            ans.push_back(res);
            return ;
        }
        res.push_back(nums[idx]);
        rec(idx+1,n,nums,res,ans);
        res.pop_back();
        rec(idx+1,n,nums,res,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int>res;
        rec(0,n,nums,res,ans);
        return ans;
    }
};