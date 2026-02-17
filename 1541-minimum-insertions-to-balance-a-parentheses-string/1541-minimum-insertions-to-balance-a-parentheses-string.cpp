class Solution {
public:
    int minInsertions(string s) {
        stack<char> st;
        int n = s.size();
        int i = 0, cnt = 0;

        while (i < n) {
            if (s[i] == '(') {
                st.push('(');
                i++;
            } 
            else {
                if (!st.empty()) {
                    if (i + 1 < n && s[i + 1] == ')') {
                        st.pop();
                        i += 2;
                    } else {
                        cnt++;
                        st.pop();
                        i++;
                    }
                } 
                else {
                    if (i + 1 < n && s[i + 1] == ')') {
                        cnt++;
                        i += 2;
                    } else {
                        cnt += 2;
                        i++;
                    }
                }
            }
        }

        while (!st.empty()) {
            cnt += 2;
            st.pop();
        }

        return cnt;
    }
};
