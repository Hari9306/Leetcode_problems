class Solution {
public:
    void rec(vector<string>& cmp,string &digits,vector<string>& ans,string& s,int n,int idx){
        if(s.size()==n){
            ans.push_back(s);
            return;
        }
        for(auto x : cmp[digits[idx]-'0']){
            s.push_back(x);
            rec(cmp,digits,ans,s,n,idx+1);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        vector<string> cmp = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string s ="";
        rec(cmp,digits,ans,s,n,0);
        return ans;   
    }
};