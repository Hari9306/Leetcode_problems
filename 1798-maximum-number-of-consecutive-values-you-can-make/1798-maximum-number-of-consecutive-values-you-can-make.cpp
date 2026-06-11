class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(coins.begin(),coins.end());
        int ans=0;
        for(auto x : coins){
            if(ans+1 >= x){
                ans=max(ans,x+ans);
            }
        }
        return ans+1;
    }
};