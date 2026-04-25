class Solution {
public:
    bool validDigit(int n, int x) {
        int cnt=0;
        int dig=0;
        while(n >0){
            dig=n%10;
            if(dig == x) cnt++;
            n=n/10;
        }
        return cnt >=1 && dig!=x ;
    }
};