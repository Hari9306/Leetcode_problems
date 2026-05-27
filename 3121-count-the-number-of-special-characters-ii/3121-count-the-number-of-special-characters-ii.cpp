class Solution {
public:
    int numberOfSpecialChars(string word) {
        int cnt=0;
        vector<int>freqA(26,INT_MAX);
        vector<int>freqa(26,-1);
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(ch>='a' && ch<='z'){
                freqa[ch-'a']=i;
            }
            else {
                freqA[ch-'A']=min(freqA[ch-'A'],i);
            }
        }
        for(int i=0;i<26;i++){
            if(freqa[i]!=-1 &&  freqA[i]!= INT_MAX &&freqa[i]< freqA[i]){
                cnt++;
            }
        }
        return cnt;
    }
};