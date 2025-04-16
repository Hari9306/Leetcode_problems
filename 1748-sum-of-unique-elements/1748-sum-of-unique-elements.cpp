class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[101]={0};
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int cnt=0;
        for(int i=0;i<101;i++){
            if(freq[i]==1){
                cnt+=i;
            }
        }
        return cnt;
    }
};