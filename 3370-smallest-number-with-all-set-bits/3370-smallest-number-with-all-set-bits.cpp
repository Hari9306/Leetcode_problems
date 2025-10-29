class Solution {
public:
    int smallestNumber(int n) {
        int temp=1;
        while(temp<=n){
            temp=temp*2;
        }
        return temp-1;
    }
};