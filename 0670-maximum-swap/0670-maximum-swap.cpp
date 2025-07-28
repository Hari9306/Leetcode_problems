class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = s.size();

        for (int i = 0; i < n; i++) {
            int j = -1;
            char ch = s[i];
            for (int k = i + 1; k < n; k++) {
                if (s[k] >= ch) {
                    if (s[k] > ch || k > j) {
                        ch = s[k];
                        j = k;
                    }
                }
            }
            if (j != -1 && s[i] != s[j]) {
                swap(s[i], s[j]);
                return stoi(s);
            }
        }

        return num;
    }
};
