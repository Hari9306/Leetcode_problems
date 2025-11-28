class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0, temp = 0 ;
        while(n>0){
             long long dig=n%10;
             if(dig!=0){
            temp=temp*10+dig;
             }
            sum+=dig;
            n=n/10;
        }long long val=0;
        while ( temp > 0 ){
            long long dig=temp%10;
            val=val*10+dig;
            temp=temp/10;
        }
        return val*sum;
    }
};