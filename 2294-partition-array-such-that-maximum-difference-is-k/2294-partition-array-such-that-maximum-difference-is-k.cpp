class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int i=0;
        int j=0;
        int n=nums.size();
        while(i<n){
            while(j<n && (nums[j]-nums[i]) <= k){
                j++;
            }
            cnt++;
            i=j;
        }
        return cnt;
    }
};