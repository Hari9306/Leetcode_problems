class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
       int left_Sum=0;
       int right_Sum=0;
       int sum=0;        
        for (int num : nums) {
            right_Sum += num;
        }
        for (int i = 0; i < nums.size(); i++) {
            right_Sum -= nums[i]; 
            
            if (left_Sum == right_Sum) {
                return i; 
            }
            
            left_Sum += nums[i]; 
        }
        
        return -1; 
    }
};
