class Solution {
public:
    int minOperations(vector<int>& nums) {
        int flag=1,cnt=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==flag){
            continue;
        }
        else{
            cnt++;
            flag=0;
        }
    }
    return cnt;
    }
};