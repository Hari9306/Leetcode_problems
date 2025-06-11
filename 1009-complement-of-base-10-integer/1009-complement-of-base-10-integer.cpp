class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        int bitlength=log2(n)+1;
        return n^((1<<bitlength)-1);
    }
};