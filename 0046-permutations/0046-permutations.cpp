class Solution {
public:
    void rec(vector<int>& nums,vector<int>& res,vector<int>&vis,vector<vector<int>>&ans,int n){
        if(res.size()==n){
            ans.push_back(res);
            return;
        }
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                vis[i]=1;
                res.push_back(nums[i]);
                rec(nums,res,vis,ans,n);
                res.pop_back();
                vis[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> vis(n,0);
        vector<int> res;
        rec(nums,res,vis,ans,n);
        return ans;
    }
};