class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     int left=0;
     int right=numbers.size()-1;
     while(left<=right){
        int more=target-numbers[left];
        if(numbers[right]==more){
            return {left+1,right+1};
        }
       else if(numbers[right]>=more){
            right--;
        }
        else{
            left++;
        }
     }   
     return {-1,-1};
    }
};