class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n=word.size();
        map<string,int> mpp;
        for(int i=0;i<n;i++){
            string res="";
            for(int j=i;j<n;j++){
                mpp[res+=word[j]]++;
            }
        }
        int cnt=0;
        for(auto ch : patterns){
            if(mpp.find(ch)!=mpp.end()) cnt++;
        }
        return cnt;
    }
};