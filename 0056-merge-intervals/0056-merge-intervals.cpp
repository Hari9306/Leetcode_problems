class Solution {
public:
    static bool cmp(vector<int>& a ,vector<int>& b){
        if(a[0] < b[0]) return true;
        if(a[0] > b[0]) return false;
        if(a[1] > b[1]) return true;
        return false;
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),cmp);
        vector<vector<int>> ans;
        int i=0;
        int j=0;
        while(i < n){
            int low=intervals[i][0];
            int up=intervals[i][1];
            j=i+1;
            while(j < n){
                int flow=intervals[j][0];
                int fup=intervals[j][1];
                if(flow <= up) {
                    up = max(up, fup);
                }
                else {
                    break;
                }
                j++;
            }
            i=j;
            ans.push_back({low,up});
        }
        return ans;
    }
};