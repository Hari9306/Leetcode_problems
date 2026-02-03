class Solution {
public:
    string reverseByType(string s) {
        string a="";
        string b="";
        for(char ch:s){
            if(ch>='a' && ch<='z') a+=ch;
            else b+=ch;
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int j=0,k=0;
        for(int i=0;i<s.size();i++){
            if(s[i] >='a' && s[i]<='z'){
                s[i]=a[j++];
            }
            else {
                s[i]=b[k++];
            }
        }
        return s;
    }
};