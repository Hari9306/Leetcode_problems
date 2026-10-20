class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        sort(horizontalCut.rbegin(),horizontalCut.rend());
        sort(verticalCut.rbegin(),verticalCut.rend());
        int i=0,j=0;
        int hor=1,ver=1;
        int tot=0;
        while(i < horizontalCut.size() && j < verticalCut.size()){
            if(horizontalCut[i] >verticalCut[j]){
                tot += horizontalCut[i] * ver;
                hor++;
                i++;
            }
            else{
                tot+=verticalCut[j]*hor;
                ver++;
                j++;
            }
        }
        while(i<horizontalCut.size()){
            tot += horizontalCut[i] * ver;
            i++;
        }
        while(j<verticalCut.size()){
            tot+=verticalCut[j]*hor;
            j++;
        }
        return tot;
    }
};