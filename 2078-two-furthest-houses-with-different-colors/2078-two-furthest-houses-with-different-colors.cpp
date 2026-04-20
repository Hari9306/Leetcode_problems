class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxi=0;
        int mini=0;
        for(int i=0;i<colors.size();i++){
            for(int j=colors.size()-1;j>=i;j--){
                if(colors[i]!=colors[j]){
                    maxi=abs(i-j);
                    if(maxi > mini){
                        mini=maxi;
                    }
                }
            }
        }
        return mini;
    }
};