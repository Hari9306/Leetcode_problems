class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int, vector<int>> mpp;
        for (int i = 0; i < groupSizes.size(); i++) {
            mpp[groupSizes[i]].push_back(i);
        }

        vector<vector<int>> ans;

        for (auto it : mpp) {
            int i = 0, n = it.second.size();
            while (i < n) {
                vector<int> res;
                int idx = it.first;
                while (idx--) {
                    res.push_back(it.second[i++]);
                }
                ans.push_back(res);
            }
        }
         return ans;
     }
    };