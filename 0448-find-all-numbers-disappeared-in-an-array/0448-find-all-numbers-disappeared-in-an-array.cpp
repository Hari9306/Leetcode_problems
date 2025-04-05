class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
     set<int> hari;
        vector<int> mad;
        for (auto i : nums) {
            hari.insert(i);
        }
        int n = nums.size();
        for (int i = 1; i <= n; i++) {
            if (hari.find(i) == hari.end()) {
                mad.push_back(i);
            }
        }
        return mad;
 
    }
};