class Solution {
public:
    int minDeletions(string s) {
        vector<int> cmp(26,0);
        for(int i=0;i<s.size();i++){
            cmp[s[i]-'a']++;
        }   
        int cnt=0; 
        sort(cmp.begin(),cmp.end(),greater<int>());
        for(int i=0;i<26;i++){
            cout<<cmp[i]<<endl;
        }
        for (int i = 1; i < 26; i++) {
            while (cmp[i] > 0 && cmp[i] >= cmp[i - 1]) {
                cmp[i]--;
                cnt++;
            }
        }
        return cnt;
    }
};