class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int j=nums[i];
            int max=0;
            int u=0;
            while(j!=0){
                u++;
       if(max<j%10){
        max=j%10;
       }
       j=j/10;
            }
            int y=0;
            while(u!=0){
                y=y*10+max;
                u--;
            }
  nums[i]=y;
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum;
    }
};