class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long >ans;
        for(auto val:nums){
            ans.push_back(val);
            while(ans.size()>=2 && ans[ans.size()-1]==ans[ans.size()-2]){
                long long a=ans.back();
                ans.pop_back();
                ans.pop_back();
                ans.push_back(a*2);
            }
        }
        return ans;
    }
};