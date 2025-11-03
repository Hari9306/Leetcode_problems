class Solution {
public:
    int minCost(string colors, vector<int>& time) {
        int ans=0;
        int prev=0;
        for(int i=1;i<colors.size();i++){
            if(colors[i]==colors[i-1]){
                if(time[prev]>=time[i]){
                    ans+=time[i];
                    continue;
                }
                else {
                    ans+=time[prev];
                    prev=i;
                }
            }
            else {
                prev=i;
            }
        }
        return ans;
    }
};