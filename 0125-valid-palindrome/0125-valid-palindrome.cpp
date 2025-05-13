class Solution {
public:
    bool isPalindrome(string s) {
        string v="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                v.push_back(tolower(s[i]));
            }
            else if(s[i]>='a'&&s[i]<='z'){
                v.push_back(s[i]);
            }
            else if(s[i]>='0'&&s[i]<='9'){
                v.push_back(s[i]);
            }
        }
        string x=v;
        reverse(v.begin(),v.end());
        return x==v;
    }
};