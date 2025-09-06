class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.length()){
            return s;
        }
        int idx=0,d=0;
        vector<vector<char>>rows(numRows);
        for(char ch : s){
            rows[idx].push_back(ch);
            if(idx==0){
                d=1;
            }
            else if(idx==numRows-1){
                d=-1;
            }
            idx+=d;
        }
        string result;
        for (const auto& row : rows) {
            for (char c : row) {
                result += c;
            }
        }

        return result;       
    }
};