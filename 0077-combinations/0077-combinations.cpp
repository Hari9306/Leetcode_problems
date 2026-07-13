class Solution {
public:
    void rec(vector<vector<int>> &res,vector<int>&ans,int n,int k,int val){
        if(ans.size()==k){
            res.push_back(ans);
            return;
        }
        for(int j=val;j<n;j++){
            ans.push_back(j+1);
            rec(res,ans,n,k,j+1);
            ans.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> ans;
        rec(res,ans,n,k,0);
        return res;
    }
};