class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>freqa(26,0);
        vector<int>freqA(26,0);
        for(int i=0;i<word.size();i++){
            if(word[i] >='a' && word[i]<='z'){
                freqa[word[i]-'a']++;
            }
            else{
                freqA[word[i]-'A']++;
            }
        }
        int cnt=0;
        for(int i=0;i<26;i++){
            if(freqa[i] && freqA[i]) cnt++;
        }
        return cnt;
    }
};