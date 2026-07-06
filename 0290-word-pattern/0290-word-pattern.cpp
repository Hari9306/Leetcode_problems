class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n=s.size();
        unordered_map<string,char>mpp;
        unordered_map<char,string>mpp1;
        int i=0;
        for(auto x : pattern){
            if(i>=n) return false;
            string temp="";
            while(i < n){
                if(s[i]==' '){
                    i++;
                    break;
                }
                temp+=s[i];
                i++;
            }
            if(mpp.count(temp)){
                if(mpp[temp]!=x){
                    return false;
                }
            }
            if(mpp1.count(x)){
                if(mpp1[x]!=temp){
                    return false;
                }
            }
            mpp[temp]=x;
            mpp1[x]=temp;
        }
        if(i<n) return false; 
        return true;
    }
};