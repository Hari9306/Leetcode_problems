class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        vector<int>pref(n,0);
        pref[0]=nums[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i];
        }
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            if(pref[i]==k){
                cnt++;
            }
            int val=pref[i]-k;
            if(mpp.find(val)!=mpp.end()){
                cnt+=mpp[val];
            }
            if(mpp.find(pref[i])==mpp.end()){
                mpp[pref[i]]=0;
            }
            mpp[pref[i]]++;
        }
        return cnt;
    }
};