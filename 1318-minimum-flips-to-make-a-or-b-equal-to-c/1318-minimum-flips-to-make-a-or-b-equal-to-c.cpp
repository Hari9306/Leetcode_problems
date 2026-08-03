class Solution {
public:
    int minFlips(int a, int b, int c) {
        int cnt=0;
        for(int i=0;i<31;i++){
            bool val = a & (1<<i);
            bool val1= b & (1<<i);
            bool val2= c & (1<<i);
            if(val2){
                if(val || val1) continue;
                else cnt++;
            }
            else {
                if(val) cnt++;
                if(val1) cnt++;
            }
        }
        return cnt;
    }
};
// a|b -> some value 
// 11 1 
// 10 01 -> 1
// 110
// 101 