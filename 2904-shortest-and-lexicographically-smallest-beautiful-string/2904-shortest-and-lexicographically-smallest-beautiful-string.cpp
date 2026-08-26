class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int one=0;
        string ans="";
        int l=0;
        int len=INT_MAX;
        for(int r=0;r<n;r++){
            if(s[r]=='1') one++;
            while(one > k){
                if(s[l]=='1') one--;
                l++;
            }
            if(one==k){
                while(l <= r && s[l]=='0') l++;
                int currlen=r-l+1;
                if(currlen < len){
                    len=currlen;
                    ans=s.substr(l,len);
                }
                else if(currlen==len){
                    ans=min(ans,s.substr(l,len));
                }
            }
        }
        return ans;
 }
};