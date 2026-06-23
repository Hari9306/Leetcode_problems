class Solution {
public:
    int maxDistance(string moves) {
        int row=0;
        int col=0;
        int cnt=0;
        for(auto ch : moves){
            if(ch =='U') row--;
            else if(ch=='D') row++;
            else if(ch=='L') col--;
            else if(ch=='R') col++;
            else cnt++;
        }
        int ans=max(abs(row)+abs(col+cnt),abs(row)+abs(col-cnt));
        return ans; 
    }
};