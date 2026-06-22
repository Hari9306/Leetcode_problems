class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mpp;
        map<char,int> mpp1;
        for(auto ch : s){
            mpp[ch]++;
        }
        for(auto ch : t){
            mpp1[ch]++;
        }
        int ans=0;
        for(auto ch : s){
            if(mpp1[ch] < mpp[ch]) {
                ans+=(mpp[ch]-mpp1[ch]);
                mpp[ch]=0;
                mpp1[ch]=0;
            }
        }
        return ans;
    }
};