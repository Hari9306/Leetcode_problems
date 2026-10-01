class Solution {
public:
    void rec(int idx,int tar,vector<int>& cand,vector<int>& res,vector<vector<int>> &ans){
        if(tar==0){
            ans.push_back(res);
            return ;
        }
        else if(idx==cand.size()||tar < 0) return ;
            res.push_back(cand[idx]);
            rec(idx+1,tar-cand[idx],cand,res,ans);
            res.pop_back();
        while(idx < cand.size()-1 && cand[idx]==cand[idx+1]){
            idx++;
        }
        rec(idx+1,tar,cand,res,ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        sort(candidates.begin(),candidates.end());
        rec(0,target,candidates,res,ans);
        return ans;
    }
};