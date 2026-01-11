class Solution {
public:
    int residuePrefixes(string s) {
        int cnt=0;
        map<char,int> mpp;
        for(int i=0;i< s.size();i++){
            mpp[s[i]]++;
            if(mpp.size()==(i+1)%3) cnt++;
        }
        return cnt;
    }
};