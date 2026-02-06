class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxlen=0,left=0;
        for(int rig=0;rig<n;rig++){
            while(nums[rig]>(long long)nums[left]*k){
                left++;
            }
            maxlen=max(maxlen,rig-left+1);
        }
        return n-maxlen;
    }
};