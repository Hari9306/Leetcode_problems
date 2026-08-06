class Solution {
public:
    bool check(int n,int t){
        int pro=1;
        while(n > 0){
            pro =pro *(n%10);
            n/=10;
        }
        if(pro%t==0) return true;
        return false;
    }
    int smallestNumber(int n, int t) {
        while(true){
            if(check(n,t)) return n;
            n++;
        }
        return n;
    }
};