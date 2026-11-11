class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long NoBoth=1LL*need1*cost1+1LL*need2*cost2;
        long long max_val=1LL*max(need1,need2)*costBoth;
        long long val=min(need1,need2);
        long long rem1=need1-val;
        long long rem2=need2-val;
        long long allcost=1LL*val*costBoth+1LL*rem1*cost1+1LL*rem2*cost2;
        
        return min({max_val,NoBoth,allcost});
    }
};