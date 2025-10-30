class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans(nums.size());
        int n=nums.size();
        int k=n-1;
        for(int i=1;i<n;i+=2){
            ans[i]=nums[k--];
        }
        for(int i=0;i<n;i+=2){
            ans[i]=nums[k--];
        }
        nums=ans;
    }
};