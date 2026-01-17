class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int left=0;
        int maxi=0;
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            freq[s[i]-'A']++;
            maxi=max(maxi,freq[s[i]-'A']);
            while((i-left+1)-maxi >k){
                freq[s[left]-'A']--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};