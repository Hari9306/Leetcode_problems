class Solution {
public:
    void rec(vector<string> &res, int open , int close,string s,int n){
        if(open == 0 && close==0) {
            res.push_back(s);
            return ;
        }
        if(open){
            s+='(';
            rec(res,open-1,close,s,n);
            s.pop_back();
        }
        if(close > open){
            s+=')';
            rec(res,open,close-1,s,n);
            s.pop_back();
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string> res;
        rec(res,n,n,s,n);
        return res;
    }
};