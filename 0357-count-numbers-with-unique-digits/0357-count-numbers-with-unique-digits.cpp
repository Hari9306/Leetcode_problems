class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0) return 1;
        if(n == 1) return 10;
        int res=10,unique=9,ava=9;
        for(int i=2;i<=n&&ava>0;i++){
            unique*=ava;
            res+=unique;
            ava--;
        }
        return res;
    }
};