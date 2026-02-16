class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        unordered_map<int,int>mmpp;
        for(auto it:mpp){
            mmpp[it.second]++;
        }
        for(int i=0;i<n;i++){
            if(mmpp[mpp[nums[i]]]==1){
                return nums[i];
            }
        }
        return -1;
    }
};