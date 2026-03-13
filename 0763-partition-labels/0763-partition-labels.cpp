class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]=i;
        }
        vector<int>res;
        int start=0,end=0;
        for(int i=0;i<s.size();i++){
            end=max(end,mpp[s[i]]);
            if(i==end){
                res.push_back(end-start+1);
                start=i+1;
            }
        }
        return res;
    }
};