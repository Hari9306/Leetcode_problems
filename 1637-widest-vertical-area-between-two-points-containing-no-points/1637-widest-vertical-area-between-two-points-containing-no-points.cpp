class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>ans;
        for (auto it : points) ans.push_back(it[0]);
        sort(ans.begin(), ans.end());
        int anss= 0;
        for (int i = 1; i < ans.size(); i++){
            anss= max(anss, ans[i] - ans[i-1]);
        }
    return anss;
    }
};