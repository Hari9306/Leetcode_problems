class Solution {
public:
    int minFlips(int a, int b, int c) {
        int cnt=0;
        for(int i=0;i<32;i++){
            int amask= a &(1<< i);
            int bmask= b &(1<< i);
            int cmask= c &(1<< i);
            if(cmask){
                if(amask || bmask) continue;
                else cnt++;
            }
            else{
                if(amask) cnt++;
                if(bmask) cnt++;
            }
        }
        return cnt;
    }
};