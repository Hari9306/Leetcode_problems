class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return s;
        int k=n/2;
        return max(s+1LL*k*m-(k-1),s+1LL*k*m-k);
    }
};