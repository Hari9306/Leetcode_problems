class Solution {
public: 
    bool isvowel(char ch){
        return ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    int vowelConsonantScore(string s) {
        int  v=0;
        int  c=0;
        for(int i=0;i<s.size();i++){
             if(s[i]>='0' && s[i] <='9') {
                continue;
            }
            if(s[i]==' ') continue;
            if(isvowel(s[i])){
                v++;
            }
            else c++;
        }
        if(c>0) return floor(v/c);
        return 0;
    }
};