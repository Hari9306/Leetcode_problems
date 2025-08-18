class Solution {
public:
    int findClosest(int x, int y, int z) {
        int x_pos=0,y_pos=0;
       x_pos=abs(x-z);
       y_pos=abs(y-z);
       return x_pos==y_pos?0:x_pos<y_pos?1:2;
    }
};