class Solution {
public:
    bool is_vowel(char ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    int beautifulSubstrings(string s, int k) {
        int n=s.size();
        int res=0;
        for(int i=0;i<n;i++){
            int c=0,v=0;
            for(int j=i;j<n;j++){
                if(is_vowel(s[j])){
                    v++;
                }
                else {
                    c++;
                }
                if(c==v && (c*v)%k==0){
                    res++;
                }
            }
        }
        return res;
    }
};