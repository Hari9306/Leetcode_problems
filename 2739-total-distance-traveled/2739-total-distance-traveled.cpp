class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int dis=0;
        while(mainTank>=5&&additionalTank>=1){
            dis+=10*5;
            mainTank-=4;
            additionalTank-=1;
        }
        return dis+(mainTank*10);
    }
};