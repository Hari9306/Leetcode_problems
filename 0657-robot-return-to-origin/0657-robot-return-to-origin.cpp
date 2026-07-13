class Solution {
public:
    bool judgeCircle(string moves) {
        int i=0,j=0;
        for(char ch : moves){
            if(ch=='U'){
                i--;
            }
            else if(ch=='D'){
                i++;
            }
            else if(ch=='L'){
                j--;
            }
            else if(ch=='R'){
                j++;
            }
        }
        return i==0 && j==0;
    }
};