class Solution {
public:
    int getSum(int a, int b) {
        int sum=a^b;
        int carry=(a&b)<<1;
        while(carry!=0){
            a=sum;
            b=carry;
            sum=a^b;
            carry=(a&b)<<1;
        }
        return sum;
    }
};
// 01 
// 10 
// 11
// 10 
// 11 xor 
// 01
// 10