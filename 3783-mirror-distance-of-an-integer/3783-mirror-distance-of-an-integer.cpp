class Solution {
public:
    int rev(int x){
        int temp=0;
        while(x>0){
            temp=temp*10+(x%10);
            x/=10;
        }
        return temp;
    }
    int mirrorDistance(int n) {
        return  abs(n-rev(n));
    }
};