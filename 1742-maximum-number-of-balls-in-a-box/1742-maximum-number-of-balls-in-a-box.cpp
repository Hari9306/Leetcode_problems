class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> freq(46,0);
        for(int i=lowLimit;i<=highLimit;i++){
            int temp=i;
            int sum=0;
            while(temp>0){
               sum+=temp%10;
               temp/=10;
            }
            freq[sum]++;
        }
       

        return *max_element(freq.begin(),freq.end());
    }
};