class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10) return false;
        int t=10;
        bool alice = true;
        while(n >=t){
            n-=t;
            t--;
            alice =!alice;
        }
        return !alice;
    }
};
// 