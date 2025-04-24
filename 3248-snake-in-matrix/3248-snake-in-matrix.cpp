class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int l =0,r=0;
        for(int i=0;i<commands.size();i++){
            string s=commands[i];
            if(s=="DOWN"){
                r++;
            }
            else if(s=="UP"){
                r--;
            }
            else if(s=="RIGHT"){
                l++;
            }
            else {
                l--;
            }
        }
        int res=r*n+l;
        return res;
        
    }
};