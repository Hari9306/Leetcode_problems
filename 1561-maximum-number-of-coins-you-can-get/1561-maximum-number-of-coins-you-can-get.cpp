class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int k=n/3;
        int sum=0;
        for(int i=n-2;i>=k;i=i-2){
            sum+=piles[i];
        }
        return sum;
    }
};