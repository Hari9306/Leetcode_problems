class Solution {
public:
    string maximumXor(string s, string t) {
        int zero=0,one=0;
        for(char c:t){
            if(c=='0') zero++;
            else one++;
        }
        string res="";
        for(char c:s){
            if(c=='0'){
                if(one>0){
                    res+='1';
                    one--;
                }
                else {
                    res+='0';
                }
            }
            else {
                if(zero>0){
                    res+='1';
                    zero--;
                }
                else {
                    res+='0';
                }
            }
        }
        return res;
    }
};