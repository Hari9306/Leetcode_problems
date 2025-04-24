class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        int n=0;
        for(int i=0;i<details.size();i++){
            
            n=0;
            n=(details[i][11]-'0')*10+(details[i][12]-'0');
            if(n>60){
                cnt++;
            }
        }
        return cnt;
    }
};