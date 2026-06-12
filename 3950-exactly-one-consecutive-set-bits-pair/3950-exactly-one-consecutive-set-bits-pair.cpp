class Solution {
public:
    bool consecutiveSetBits(int n) {
        int cnt = 0;
        for(int i = 0; i < 31; i++) {
            int prev = n & (1 << i);
            int curr = n & (1 << (i + 1));
            if(prev && curr)
                cnt++;
        }
        return cnt == 1;
    }
};