class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        int n=s1.size();
        vector<vector<string>> ans;
        string c1="";
        string c2="";
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                if(c1.size() >0){
                    ans.push_back({c1,c2});
                }
                c1="";
                c2="";
            }
            else{
                c1+=s1[i];
                c2+=s2[i];
            }
        }
        if(c1.size() >0) ans.push_back({c1,c2}); 
        return ans;
    }
};