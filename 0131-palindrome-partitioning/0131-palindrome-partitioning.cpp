class Solution {
public:
    bool check(string &s,int l,int r){
        while(r>l){
            if(s[l]!=s[r])return false;
            l++;
            r--;
        }
        return true;
    }
    void rec(vector<vector<string>>&ans,vector<string>&res,int idx,string &s){
        if(idx==s.size()){
            ans.push_back(res);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(check(s,idx,i)){
                res.push_back(s.substr(idx,i-idx+1));
                rec(ans,res,i+1,s);
                res.pop_back();
            }
        }

    }
    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<vector<string>> ans;
        vector<string> res;
        string t;
        rec(ans,res,0,s);
        return ans;
    }
};