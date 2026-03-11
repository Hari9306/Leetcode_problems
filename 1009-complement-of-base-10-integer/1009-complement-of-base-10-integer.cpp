class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int mask=0;
        int cnt=0;
        while(n>0){
            int bit=!(n&1);
            mask|=(bit<<cnt);
            cnt++;
            n>>=1;
        }
        return mask;
    }
};