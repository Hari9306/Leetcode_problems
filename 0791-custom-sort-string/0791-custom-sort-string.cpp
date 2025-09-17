class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        string res="";
        for(int i=0;i<order.size();i++){
            if(mpp[order[i]]!=0){
                while(mpp[order[i]]){
                    res+=order[i];
                    mpp[order[i]]--;
                }
            }
        }
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it->second!=0){
                while(it->second){
                    res+=it->first;
                    it->second--;
                }
            }
        }
        return res;
    }
};