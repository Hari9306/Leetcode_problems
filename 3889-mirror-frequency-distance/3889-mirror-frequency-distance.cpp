class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> digit(10),freq(26);
        for(int i=0;i<s.size();i++){
            if(s[i] >='a' && s[i] <='z'){
                freq[s[i]-'a']++;
            }
            else{
                digit[s[i]-'0']++;
            }
        }
        int ans=0;
        for(int i=0;i<5;i++){
            ans+=abs(digit[i]-digit[9-i]);
        }
        for(int i=0;i<13;i++){
            ans+=abs(freq[i]-freq[25-i]);
        }
        return ans;
    }
};