class Solution {
public:
    void rec(int idx,int tar,vector<int> res,vector<vector<int>>& ans,vector<int>& candidates){
        if(tar==0){
            ans.push_back(res);
            return ;
        }
        else  if(idx==candidates.size()){
                return;
        }
        if(tar-candidates[idx] >= 0){
            res.push_back(candidates[idx]);
            rec(idx,tar-candidates[idx],res,ans,candidates);
            res.pop_back();
        }
        rec(idx+1,tar,res,ans,candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        rec(0,target,res,ans,candidates);
        return ans;
    }
};