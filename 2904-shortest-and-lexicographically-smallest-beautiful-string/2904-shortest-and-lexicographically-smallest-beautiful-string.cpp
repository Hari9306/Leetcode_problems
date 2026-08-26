class Solution {
public:
    // 100011001
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int left=0;
        int len=INT_MAX;
        int one=0;
        string ans="";
        for(int rig=0;rig<n;rig++){
            if(s[rig]=='1') one++;
            while(one>k){
                if(s[left]=='1') one--;
                left++;
            }
            if(one==k){
                while(left <= rig && s[left]=='0') left++;
                int currlen=rig-left+1;
                if(currlen < len){
                    len=currlen;
                    ans = s.substr(left,len);
                }
                if(currlen==len){
                    ans=min(ans,s.substr(left,len));
                }
            }
        }
        return ans;
    }
};