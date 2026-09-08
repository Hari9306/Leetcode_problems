class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int tot=0;
        map<int,int>mpp;
        mpp[0]=-1;
        for(int i=0;i<n;i++){
            tot+=nums[i];
            if(mpp.find(tot%k)!=mpp.end()){
                if(i-mpp[tot%k]>1) return true;
            }
            else{
                mpp[tot%k]=i;
            }
        }
        return false;
    }
};