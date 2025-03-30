class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> find;
        for(int i=0;i<words.size();i++){
           string s=words[i];
           for(int j=0;j<s.size();j++){
            if(s[j]==x){
                find.push_back(i);
                break;
            }
           }
        }
        return find;
    }
};