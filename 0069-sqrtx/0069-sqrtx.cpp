class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        for(int i=0;i<=x;i++){
            if(1ll*i*i<=x){
                ans=i;
            }
            else{
                break;
            }
        }
        return ans;
    }
};