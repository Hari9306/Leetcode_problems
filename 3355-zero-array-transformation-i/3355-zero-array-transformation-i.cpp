class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int> pref(n+1,0);
        for(auto x : queries){
            pref[x[0]]++;
            if(x[1]+1 < n) pref[x[1]+1]--;
        }
        for(int i=1;i < n+1;i++){
            pref[i]=pref[i-1]+pref[i];
        }
        for(int i=0;i<n;i++){
            if(nums[i] > pref[i]) return false;
        }
        return true;
    }
};