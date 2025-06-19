class Solution {
public:
    int count_set(int x){
        int cnt=0;
        while(x!=0){
            x=x&(x-1);
            cnt++;
        }
        return cnt;
    }
    int minBitFlips(int start, int goal) {
        int res=start^goal;
         return count_set(res);
    }
};