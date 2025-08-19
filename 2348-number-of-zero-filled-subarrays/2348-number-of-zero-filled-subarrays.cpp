class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long  cnt=0,total=0;
        for(int num:nums){
            if(num==0){
                cnt++;
                total+=cnt;
            }
            else{
                cnt=0;
            }
        }
        return total;
    }
};