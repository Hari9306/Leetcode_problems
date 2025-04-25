class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
         int sum=0;
         for(int i=0;i<nums.size();i++){
            int j=i;
            int cnt1=0;
            while(j!=0){
                if(j%2==1){
                    cnt1++;
                }
                j/=2;
            }
            if(cnt1==k){
                sum+=nums[i];
            }
         }
         return sum;
    }
};