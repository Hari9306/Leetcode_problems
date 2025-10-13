class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        vector<string>ans(n);
        for(int i=0;i<n;i++){
            string s=words[i];
            sort(s.begin(),s.end());
            ans[i]=s;
        }
        vector<string> res;
        res.push_back(words[0]);
        for(int i=1;i<n;i++){
            if(ans[i]!=ans[i-1]){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};