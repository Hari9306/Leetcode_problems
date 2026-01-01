class Solution {
    public int maxProfit(int[] prices) {
        int n=prices.length;
        int ans=0;
        int max_val=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]<max_val){
                max_val=prices[i];
            }
            ans=Math.max(ans,prices[i]-max_val);
        }
        return ans;
    }
}