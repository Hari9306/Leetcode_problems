class Solution {
public:
    int addDigits(int num) {
        while(1){
            if(num<=9) return num;
            else{
                int sum=0;
                while(num>0){
                 int dig=num%10;
                 sum+=dig;
                 num=num/10;
                }
                num=sum;
            }
        }
        return 0;
    }
};