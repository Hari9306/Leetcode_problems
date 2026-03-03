class Solution {
public:
    string invert(string s){
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')s[i]='1';
            else s[i]='0';
        }
        return s;
    }
    char findKthBit(int n, int k) {
       string res="0";
       while(res.size() < k){
        string temp=invert(res);
        reverse(temp.begin(),temp.end());
        res+="1"+temp;
       }
       return res[k-1];
    }
};