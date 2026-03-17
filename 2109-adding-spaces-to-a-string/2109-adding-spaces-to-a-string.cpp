class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res="";
        int j=0;
        for(int i=0;i<spaces.size();i++){
            while(j < spaces[i]){
                res+=s[j];
                j++;
            }   
            res+=" ";
        }
        while(j<s.size()){
            res+=s[j];
            j++;
        }
        return res;
    }
};