class Solution {
public:
    void rec(vector<string>& ans,string s,int n,int open,int close){
        if(open==n && close==n){
            ans.push_back(s);
            return;
        }
        if(open < n){
            s.push_back('(');
            rec(ans,s,n,open+1,close);
            s.pop_back();
        }
        if(open > close){
            s.push_back(')');
            rec(ans,s,n,open,close+1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        rec(ans,s,n,0,0);
        return ans;   
    }
};