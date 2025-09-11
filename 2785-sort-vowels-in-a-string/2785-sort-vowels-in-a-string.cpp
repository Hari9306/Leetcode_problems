class Solution {
public:
    int is_vowel(char ch){
        return ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    string sortVowels(string s) {
        vector<char>addvowel;
        for(int i=0;i<s.length();i++){
            if(is_vowel(s[i])){
                addvowel.push_back(s[i]);
            }
        }
        sort(addvowel.begin(),addvowel.end());
        string t="";
        int j=0;
        for(int i=0;i<s.length();i++){
            if(is_vowel(s[i])){
                t.push_back(addvowel[j]);
                j++;
            }
            else {
                t.push_back(s[i]);
            }
        }
        return t;
    }
};