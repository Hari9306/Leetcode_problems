class Solution {
public:
    int maxScore(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') cnt++;
        }
        int left=0,max_len=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                left++;
            }
            else{
                cnt--;
            }

            max_len=max(max_len,left+cnt);
        }
        return max_len;
    }
};