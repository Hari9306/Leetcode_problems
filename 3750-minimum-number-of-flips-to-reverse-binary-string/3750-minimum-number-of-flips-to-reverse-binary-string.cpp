class Solution {
public:
    int minimumFlips(int n) {
        string st;
        while(n){
            int bit=n&1;
            st.push_back(bit+'0');
            n=n>>1;
        }
        string ans=st;
        reverse(ans.begin(),ans.end());
        int cnt=0;
        for(int i=0;i< st.size();i++){
            if(st[i]!=ans[i]) cnt++;
        }
        return cnt;
    }
};