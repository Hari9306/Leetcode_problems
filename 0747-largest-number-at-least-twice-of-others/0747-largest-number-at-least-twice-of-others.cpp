class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>> cmp;
        for(int i=0;i<n;i++){
            cmp.push_back({nums[i],i});
        }
        sort(cmp.begin(),cmp.end());
        if((cmp[n-2].first*2)<=cmp[n-1].first){
            return cmp[n-1].second;
        }
        return -1;
    }
};