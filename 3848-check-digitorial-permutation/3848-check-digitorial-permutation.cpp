class Solution {
public:
    bool isDigitorialPermutation(int n) {
        vector<int> fact={1,1,2,6,24,120,720,5040,40320,362880};
        long long sum=0;
        vector<int>freq(10);
        while(n>0){
            sum+=fact[n%10];
            freq[n%10]++;
            n/=10;
        }
        vector<int> mfreq(10);
        while(sum>0){
            mfreq[sum%10]++;
            sum/=10;
        }
        for(int i=0;i<10;i++){
            if(freq[i]!=mfreq[i]){
                return false;
            }
        }
        return true;
    }
};