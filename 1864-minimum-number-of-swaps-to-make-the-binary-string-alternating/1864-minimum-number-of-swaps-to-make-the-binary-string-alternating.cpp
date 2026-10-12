class Solution {
public:
    int Flip(string &s,char ch){
        int cnt=0;
        for(int i=0;i<s.size();i+=2){
            if(s[i]!=ch) cnt++;
        }
        return cnt;
    }
    int minSwaps(string s) {
        int one=0;
        int zero=0;
        for(auto x : s) x=='0' ? zero++ :one++;
        if(abs(zero-one) >1) return -1;
        if(one > zero) return Flip(s,'1');
        if(zero > one) return Flip(s,'0');
        return min(Flip(s,'0'),Flip(s,'1'));
    }
};