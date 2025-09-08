class Solution {
public:
    int add(int x){
        int sum=0;
        while(x>0){
            sum+=(x%10);
            x=x/10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int ele_sum=0,digit_sum=0;
        for(int i=0;i<nums.size();i++){
            ele_sum+=nums[i];
            if(nums[i]>9){
                digit_sum+=add(nums[i]);
            }
            else{
                digit_sum+=nums[i];
            }
        }
        return abs(ele_sum-digit_sum);
    }
};