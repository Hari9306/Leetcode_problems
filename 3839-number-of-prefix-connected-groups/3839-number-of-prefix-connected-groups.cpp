class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int>freq;
        for(auto s: words){
            if(s.size()<k) continue;
            string pre=s.substr(0,k);
            freq[pre]++;
        }
        int cnt=0;
        for(auto it: freq){
            if(it.second>=2) cnt++;
        }
        return cnt;
    }
};