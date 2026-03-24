class Solution {
public:
    void rec(vector<string>& ans,string s,int i){
        if(i==s.size()) {
            ans.push_back(s);
            return;
        }
        if((s[i]>='a' && s[i] <='z') || (s[i]>='A' && s[i] <='Z')){
            s[i]=toupper(s[i]);
            rec(ans,s,i+1);
            s[i]=tolower(s[i]);
            rec(ans,s,i+1);
        }
        else{
            rec(ans,s,i+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        rec(ans,s,0);
        return ans;
    }
};