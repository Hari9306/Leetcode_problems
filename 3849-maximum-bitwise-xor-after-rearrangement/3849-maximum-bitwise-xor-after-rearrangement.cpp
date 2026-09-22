class Solution {
public:
    string maximumXor(string s, string t) {
        int one=0;
        int zero=0;
        for(int i=0;i<t.size();i++){
            if(t[i]=='1') one++;
            else zero++; 
        }
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') {
                if(zero > 0){
                    res+='1';
                    zero--;
                }
                else{
                    res+='0';
                    one--;
                }
            }
            else{
                if(one > 0){
                    res+='1';
                    one--;
                }
                else{
                    res+='0';
                    zero--;
                }
            }
        }
        return res;
    }
};