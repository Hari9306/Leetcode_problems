class Solution {
public:
    int longestPalindrome(string s) {
        int cnt=0;
        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            if(mpp[s[i]] & 1) cnt++;
            else cnt--;
        }
        if(cnt > 1) {
            return s.size() - cnt + 1;
        }
        return s.size();
    }
};