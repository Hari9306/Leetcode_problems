class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n=costs.size();
        priority_queue<int,vector<int>,greater<int>>lpq;
        priority_queue<int,vector<int>,greater<int>>rpq;
        int l=0,r=n-1;
        while(l<=r && lpq.size() <candidates){
            lpq.push(costs[l]);
            l++;
        }
        while(l<=r && rpq.size()<candidates){
            rpq.push(costs[r]);
            r--;
        }
        long long ans=0;
        int cnt=0;
        while(cnt < k){
            if(rpq.empty() || (!lpq.empty() && lpq.top()<=rpq.top())){
                ans+=lpq.top();
                lpq.pop();
                if(l<=r){
                    lpq.push(costs[l]);
                    l++;
                }
            }
            else {
                ans += rpq.top();
                rpq.pop();

                if (l <= r) {
                    rpq.push(costs[r]);
                    r--;
                }
            }
            cnt++;
        }
        return ans;
    }
};