class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int cnt=0;
        while(1){
          if(sum%k==0){
            return cnt;
          }
          else {
            sum=sum-1;
            cnt++;
          }
        }
        return 0;
    }
};