class Solution {
public:
    int set_bits(int n){
        long long cnt=0;
        while(n>0){
            cnt++;
            n=n&(n-1);
        }
        return cnt;
    }
    int minOperations(vector<int>& nums, int k) {
        int cnt=0,xorr=0;
        for(auto &it:nums) xorr^=it;
        cnt=xorr^k;
        int res=set_bits(cnt);
        return res;
    }
};