class Solution {
    int min_digit(int n,int m,int x){
        int result=min(n,m);
        result=min(result,x);
        return result;
    }
public:
    int generateKey(int num1, int num2, int num3) {
        int final=0;
        for(int i=0;i<4;i++){
         int res=min_digit(num1%10,num2%10,num3%10);
         num1/=10;
         num2/=10;
         num3/=10;
         final=final*10+res;
        }
        int reversed = 0;
        for (int i = 0; i < 4; i++) {
            reversed = reversed * 10 + final % 10;
            final /= 10;
        }
        return reversed;
    }
};