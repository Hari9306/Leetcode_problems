class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt=0;
        string res;
        for(auto x : s){
            if(x=='('){
                cnt++;
                if(cnt > 1){
                    res+=x;
                }
            }
            else{
                cnt--;
                if(cnt >0) res+=x;
            }
        }
        return res;
    }
};