class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len=0;
        int left=0;
        unordered_map<int,int>mpp;
        for(int right=0;right<s.length();right++){
            char temp=s[right];
            mpp[temp]++;
            while(mpp[temp]>1){
                char leftchar=s[left];
                mpp[leftchar]--;
                left++;
            }
            max_len=max(max_len,right-left+1);
        }
        return max_len;
    }
};