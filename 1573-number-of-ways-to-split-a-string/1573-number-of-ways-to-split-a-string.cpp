class Solution {
public:
    int numWays(string s) {
        int n=s.size();
        int MOD=1e9+7;
        int one=0;
        for(char ch : s){
            if(ch=='1') one++;
        }
        if(one%3!=0) return 0;
        if(one==0) return (1LL * (n - 1) * (n - 2) / 2) % MOD;
        int req=one/3;
        vector<int> pref(n+1,0);
        pref[0]=s[0]-'0';
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+(s[i]-'0');
        }
        vector<int> suff(n+1,0);
        suff[n-1]=s[n-1]-'0';
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]+(s[i]-'0');
        }
        int idx=0;
        for(int i=0;i<n;i++){
            if(pref[i]==req){
                idx=i;
                break;
            }
        }
        
        int f=0,e=0;
        for(int i=idx+1;i<n;i++){
            if(s[i]=='0') f++;
            else {
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(suff[i]==req) {
                idx=i;
                break;
            }
        }
        for(int i=idx-1;i>=0;i--){
            if(s[i]=='0') e++;
            else break;
        }
        return (1ll*((f+1)%MOD)*((e+1)%MOD))%MOD;
    }
};
// 1000100100
// 1000 