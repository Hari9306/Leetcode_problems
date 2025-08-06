class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            x^=nums[i];
        }
        int mask=1;
        while(1){
            if((mask&x)==0){
                mask=mask<<1;
            }
            else{
                break;
            }
        }
        int b1=0,b2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&mask){
                b1^=nums[i];
            }
            else{
                b2^=nums[i];
            }
        }
        return {b1,b2};
    }
};