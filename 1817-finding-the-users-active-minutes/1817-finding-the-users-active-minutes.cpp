class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        int n=logs.size();
        map<int,set<int>> mpp;
        for(int i=0;i<n;i++){
            mpp[logs[i][0]].insert(logs[i][1]);
        }
        vector<int> ans(k,0);
        for(auto it : mpp){
            int freq=it.second.size();
            ans[freq-1]++;
        }
        return ans;
    }
};