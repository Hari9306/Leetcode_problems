class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s="";
        for(auto ch : words){
            int sum=0;
            for(char x : ch){
                sum+=weights[x-'a'];
            }
            int mod=sum%26;
            char ans='z'-mod;
            s+=ans;
        }
        return s;
    }
};