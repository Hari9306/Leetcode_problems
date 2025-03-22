class Solution {
public:
    int totalMoney(int n) {
        int cnt=0,cnt1=0;
    for(int i=0;i<n;i++){
       if(i%7==0){
        cnt=(i/7)+1;
       }
       else{
        cnt++;
       }
       cnt1+=cnt;
    }
    return cnt1;
    }
};