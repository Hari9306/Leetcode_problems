class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd = n*n;
        int even = n*(n+1);
        cout<< odd << even <<" ";
        return gcd(odd,even);
    }
};