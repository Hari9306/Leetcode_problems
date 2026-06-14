class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0;
        int s_sum=0;
        while(n > 0){
            int temp=n%10;
            sum+=temp;
            s_sum+= (temp * temp);
            n/=10;
        }
        cout<< sum << s_sum<<"";
        return s_sum - sum >=50;
    }
};