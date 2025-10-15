class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size(), m = p.size();
        if (n < m) return ans;
        vector<int> freqP(26, 0);
        for (char c : p) freqP[c - 'a']++;

        for (int i = 0; i <= n - m; i++) {
            string ch = s.substr(i, m);
            vector<int> freqS(26, 0);
            for (char c : ch) freqS[c - 'a']++;

            if (freqS == freqP)
                ans.push_back(i);
        }

        return ans;
    }
};
