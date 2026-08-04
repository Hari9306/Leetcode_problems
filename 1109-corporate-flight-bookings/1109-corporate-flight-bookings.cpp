class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> pref(n+1,0);
        for(auto x : bookings){
            pref[x[0]]+=x[2];
            if(x[1]+1 <= n) pref[x[1]+1]-=x[2];
        }
        vector<int> ans;
        int curr=0;
        for(int i=1;i<=n;i++){
            curr+=pref[i];
            ans.push_back(curr);
        }
        return ans;
    }
};
// 0  0   0 0  0 
// 1  2 -1 -1       -1
// 1  3  2  1  1  0