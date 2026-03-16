class Solution {
public:
    bool canConstruct(string s, int k) {
        int n=s.size();
        if(n < k) return false;
        if(n==k) return true;
        int cnt=0;
        map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<mpp.size();i++){
            if(mpp[i]&1){
                cnt++;
            }
        }
        return cnt<=k;
    }
};