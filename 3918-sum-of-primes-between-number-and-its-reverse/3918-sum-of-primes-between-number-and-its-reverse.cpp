class Solution {
public:
    bool prime(int n){
        if(n <=1) return false;
        for(int i=2;i *i <=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int rev(int n){
        int num=0;
        while(n>0){
            int dig=n%10;
            num=num*10+dig;
            n/=10;
        }
        return num;
    }
    int sumOfPrimesInRange(int n) {
        int r=rev(n);
        int start=min(n,r);
        int end=max(n,r);
        int sum=0;
        for(int i=start;i<=end;i++){
            if(prime(i)){
                sum+=i;
            }
        }
        return sum;
    }
};