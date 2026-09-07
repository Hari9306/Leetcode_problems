class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int tot=0;
        int ans=0;
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            tot+= nums[i]==0 ? -1: 1;
            if(tot==0){
                ans=i+1;
            }
            if(mpp.find(tot)!=mpp.end()){
                ans=max(ans,i-mpp[tot]);
            }
            else{
                mpp[tot]=i;
            }
        }
        return ans;
    }
};