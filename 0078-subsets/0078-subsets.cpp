class Solution {
public:
    void  rec(int idx, vector<int> &ds,vector<vector<int>> &ans,vector<int>& nums,int n){
        if(idx==n){
            ans.push_back(ds);
            return;
        }
        // not take 
        rec(idx+1,ds,ans,nums,n);
        ds.push_back(nums[idx]);
        //take
        rec(idx+1,ds,ans,nums,n);
        ds.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int idx=0;
        int n=nums.size();
        vector<int> ds;
        vector<vector<int>>ans;
        rec(idx,ds,ans,nums,n);
        return ans;
    }
};