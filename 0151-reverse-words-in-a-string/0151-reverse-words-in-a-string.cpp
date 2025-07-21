class Solution {
public:
    string reverseWords(string s) {
        string med = "";
        string res = "";
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (!med.empty()) {
                    reverse(med.begin(), med.end());
                    if (!res.empty()) res += ' ';
                    res += med;
                    med = "";
                }
            } else {
                med += s[i];
            }
        }
        if (!med.empty()) {
            reverse(med.begin(), med.end());
            if (!res.empty()) res += ' ';
            res += med;
        }
        return res;
    }
};
