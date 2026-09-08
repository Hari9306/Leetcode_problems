class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int tot=0;
        unordered_map<int,int>mpp;
        int cnt=0;
        for(int i=0;i<n;i++){
            tot+=nums[i];
            if(tot==goal){
                cnt++;
            }
            if(mpp.find(tot-goal)!=mpp.end()){
                cnt+=mpp[tot-goal];
            }
            mpp[tot]++;
        }
        return cnt;
    }
};