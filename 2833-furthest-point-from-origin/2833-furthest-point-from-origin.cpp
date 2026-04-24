class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt=0;
        int mcnt=0;
        for(auto it : moves){
            if(it=='R') mcnt++;
            else if(it=='L') mcnt--;
            else cnt++;
        }
        return abs(mcnt)+cnt;
    }
};