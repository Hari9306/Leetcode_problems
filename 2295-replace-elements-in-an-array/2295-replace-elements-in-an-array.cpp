class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]=i;
        }
        for(int i=0;i<operations.size();i++){
            int old_val=operations[i][0];

            if(mpp.count(old_val)){
                 mpp[operations[i][1]]=mpp[operations[i][0]];
                mpp.erase(operations[i][0]);
            }
        }
        vector<int>ans(n);
       for(auto it : mpp){
        ans[it.second]=it.first;
       }
       return ans;
    }
};