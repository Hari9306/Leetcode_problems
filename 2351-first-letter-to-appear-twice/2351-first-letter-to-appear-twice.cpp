class Solution {
public:
    char repeatedCharacter(string s) {
         int freq[26]={0};
        for(int i=0;s[i]!='\0';i++){
            freq[s[i]-'a']++;
            if(freq[s[i]-'a']==2){
                return s[i];
            }
        }
        return -1;
    }
};