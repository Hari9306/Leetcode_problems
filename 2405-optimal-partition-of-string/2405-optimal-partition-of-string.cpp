class Solution {
public:
    int partitionString(string s) {
        vector<int> freq(26,0);
        int cnt=0;
        for(auto ch : s){
            freq[ch-'a']++;
            if(freq[ch-'a']>1){
                cnt++;
                for(int i=0;i<26;i++) freq[i]=0;
                freq[ch-'a']=1;
            }
        }
        return cnt+1;
    }
};