class Solution {
public:
    void sub(vector<int>&nums,int idx,vector<vector<int>>&ans,vector<int>&res,int n){
        if(idx==n){
            ans.push_back(res);
            return ;
        }
        // no pick 
        sub(nums,idx+1,ans,res,n);
        res.push_back(nums[idx]);
        //pick     
        sub(nums,idx+1,ans,res,n);
        res.pop_back();
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int idx=0;
        vector<vector<int>> ans;
         vector<int> res;
        sub(nums,idx,ans,res,n);     
        return ans;   
    }
};