class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left=0;
        long long right=sqrt(c);
            long long sum=0;
        while(left<=right){
            sum=left*left+right*right;
            if(sum==c){
                return 1;
            }
            else if(sum>c){
                right-=1;
            }
            else{
                left+=1;
            }
        }
        return 0;
    }
};