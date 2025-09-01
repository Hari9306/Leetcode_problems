class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k!=0){
            return false;
        }
        sort(nums.begin(),nums.end());
        map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        for(auto it:nums){
            if(mpp[it]==0){
                continue;
            }
            for(int i=0;i<k;i++){
                if(mpp[it+i]==0){
                    return false;
                }
                mpp[it+i]--;
            }
        }
        return true; 
    }
};