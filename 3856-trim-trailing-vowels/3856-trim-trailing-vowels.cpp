class Solution {
public:
    bool vowel(char ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    string trimTrailingVowels(string s) {
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(vowel(s[i])){
                s.erase(s.begin()+i);
            }
            else break;
        }
        return s;
    }
};