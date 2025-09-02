class Solution {
public:
    int isvowel(char v){
        return v=='a'||v=='e'||v=='i'||v=='o'||v=='u';
    }
    int maxVowels(string s, int k) {
        int cnt=0;
        for(int i=0;i<k;i++){
            if(isvowel(s[i])) cnt++;
        }
        int max_len=cnt;
        for(int i=k;i<s.size();i++){
            if(isvowel(s[i-k])){
                cnt--;
            }
            if(isvowel(s[i])){
                cnt++;
            }
            if(cnt>max_len){
                max_len=cnt;
            }
        }
        return max_len;
    }
};