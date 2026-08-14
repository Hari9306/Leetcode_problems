class Solution {
public:
    int maximumLengthSubstring(string s) {
        int max_len=INT_MIN;
        vector<int> freq(26,0);
        int start=0;
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
            while(freq[s[i]-'a']>2){
                freq[s[start]-'a']--;
                start++;
            }
            max_len=max(max_len,i-start+1);
        }
        return max_len;
    }
};