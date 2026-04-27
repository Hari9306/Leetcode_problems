class Solution {
public:
    int partitionString(string s) {
        int cnt=1;
        int freq[26]={0};
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            int idx=ch-'a';
            if(freq[idx] == 1){
                cnt++;
                for(int j=0;j<26;j++){
                    freq[j]=0;
                }
            }
            freq[idx]=1;
        }
        return cnt;
    }
};