class Solution {
public:
    bool squareIsWhite(string coordinates) {
       int x=coordinates[0]-'a'+1;
       int y=coordinates[1]-'0';
       cout<<x << y <<" ";
       int val=x+y;
       if(val&1) return 1;
       return 0;
    }
};