class Solution {
public:
    int mirrorDistance(int n) {
        int org=n;
        int rev=0;
        while(n > 0){
            int temp=n%10;
            rev=rev*10+temp;
            n/=10;
        }
        return abs(org-rev);
    }
};