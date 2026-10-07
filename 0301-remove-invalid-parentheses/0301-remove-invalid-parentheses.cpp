class Solution {
public:
    int mini;
    void rec(int idx,int open,int close,string &s,string &res,vector<string> &ans,int rem){
        if(close > open) return ; 
        if(idx==s.size()){
            if(open==close){
                if(rem < mini){
                    ans.clear();
                    ans.push_back(res);
                    mini=rem;
                }
                else if(rem==mini){
                    ans.push_back(res);
                }
            }
            return;
        }
        res.push_back(s[idx]);
        rec(idx+1,s[idx]=='(' ? open+1:open, s[idx]==')' ?close+1 : close,s,res,ans,rem);
        res.pop_back();
        rec(idx+1,open,close,s,res,ans,rem+1);
    }
    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;
        string res;
        mini=INT_MAX;
        rec(0,0,0,s,res,ans,0);
        set<string> st;
        st.insert(ans.begin(),ans.end());
        ans.clear();
        for(auto x : st) ans.push_back(x);

        return ans;
    }
};