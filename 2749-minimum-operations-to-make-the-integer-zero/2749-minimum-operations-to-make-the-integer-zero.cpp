class Solution {
public:
int set_bits(long long n) {
    int count = 0;
    while (n) {
        count += (n & 1);  // add 1 if last bit is set
        n >>= 1;           // shift right
    }
    return count;
}
    int makeTheIntegerZero(int num1, int num2) {
        if(num2>num1){ 
        return -1;
        }
        for(int i=1;i<=60;i++){
            long long s=(long long) num1 - (long long) i * num2;
            if(s < 0) continue;
            if(s < i) continue;
            int ones = set_bits(s);
            if(ones<=i) return i;
        }
        return -1;
    }
};
/*
num1 , num2
i  in range [0,60] and subrtace 2 power i + num2 from num1
num1- num2 - 2 pow i =0
*/


