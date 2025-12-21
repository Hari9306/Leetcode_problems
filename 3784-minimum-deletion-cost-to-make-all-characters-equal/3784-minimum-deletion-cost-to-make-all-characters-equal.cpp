class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        long long tot=0;
        map<char,long long>mpp;
        int n=s.size();
        for(int i=0;i<n;i++){
            mpp[s[i]]+=cost[i];
            tot+=cost[i];
        }
        if(mpp.size()==1) return 0;
        long long ans=LLONG_MAX;
        for(auto it : mpp){
            ans=min(ans,tot-it.second);
        }
        return ans;
    }
};