class Solution {
public:
    void rec(vector<string> &res, int n,string s){
        if(s.size()==n) {
            res.push_back(s);
            return ;
        }
        if(s.empty() || s.back()!='0'){
            rec(res,n,s+"0");
        }
        rec(res,n,s+"1");

    }
    vector<string> validStrings(int n) {
        vector<string> res;
        string s="";
        rec(res,n,s);
        return res;
    }
};