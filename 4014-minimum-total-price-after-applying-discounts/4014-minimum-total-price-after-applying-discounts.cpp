class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        double ans=0;
        int j=prices.size()-1;
        for(int i=discounts.size()-1;i>=0;i--){
           if(j>=0) ans +=(1ll*prices[j] * (100 - discounts[i]))/100.0;
            j--;
        }
        while(j >=0){
            ans+=prices[j];
            j--;
        }
        return ans;
    }
};