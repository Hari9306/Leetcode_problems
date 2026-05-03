class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int num=nums[i] & 1 ;
            for(int j=i+1;j<n;j++){
                if((nums[j]%2)!=num){
                    ans[i]++;
                }
            }
        }
        return ans;
    }
};