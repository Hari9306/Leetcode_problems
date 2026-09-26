class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n=s.size();
        unordered_map<string ,string> mpp;
        for(auto x : knowledge){
            mpp[x[0]]=x[1];
        }
        int i=0;
        string res="";
        while( i < n ){
            if(s[i]=='('){
                i++;
                string temp;
                while(i < n &&s[i]!=')'){
                    temp+=s[i];
                    i++;
                }
                i++;
                if(mpp.find(temp)!=mpp.end()){
                    res+=mpp[temp];
                }
                else{
                    res+='?';
                }
            }
            else{
                res+=s[i];
                i++;
            }
        }
        return res;
    }
};