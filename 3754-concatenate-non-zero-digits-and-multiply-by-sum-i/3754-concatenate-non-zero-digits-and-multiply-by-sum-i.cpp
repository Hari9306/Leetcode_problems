class Solution {
public:
    long long sumAndMultiply(int n) {
        long long temp=0;
        long long pro=0;
        while(n > 0){
            long long dig=n%10;
            if(dig==0){
                n/=10;
                continue;
            }
            temp=temp*10+dig;
            pro+=dig;
            n/=10;
        }
        long long sum=0;
        while(temp > 0){
            long long  dig=temp%10;
            sum=sum*10+dig;
            temp/=10;
        }
        return pro*sum;
    }
};