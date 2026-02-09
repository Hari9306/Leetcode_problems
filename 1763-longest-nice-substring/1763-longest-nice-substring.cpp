class Solution {
public:
    string longestNiceSubstring(string s) {
        if (s.size() < 2) return "";
        set<char> st(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++) {
            if (st.count(tolower(s[i])) == 0 || st.count(toupper(s[i])) == 0) {
                string left = longestNiceSubstring(s.substr(0, i));
                string right = longestNiceSubstring(s.substr(i + 1));

                return left.size() >= right.size() ? left : right;
            }
        }
        return s; 
    }
};
