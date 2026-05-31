class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>dig(10,0);
        while(n > 0){
            dig[n%10]++;
            n/=10;
        }
        int sum=0;
        for(int i=0;i<10;i++){
            sum+=i*dig[i];
        }
        return sum;
    }
};