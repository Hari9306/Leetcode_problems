class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> idx(26);
        for(int i=0;i<s.size();i++) idx[s[i]-'a']=i;
        vector<int>ans;
        int st=0,end=0;
        for(int i=0;i<s.size();i++){
            end=max(end,idx[s[i]-'a']);
            if(i==end){
                ans.push_back(end-st+1);
                st=i+1;
            }
        }
        return ans;
    }
};