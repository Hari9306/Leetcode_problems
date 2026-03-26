class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,vector<int>>,vector<pair<double,vector<int>>>,greater<pair<double,vector<int>>>>pq;
        for(auto it : points){
            double value=(it[0]*it[0])+(it[1]*it[1]);
            pq.push({sqrt(value),it});
        }
        vector<vector<int>>ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};