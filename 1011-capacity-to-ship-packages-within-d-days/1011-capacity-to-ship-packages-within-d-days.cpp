class Solution {
public:
    bool check(int mid,vector<int>& wei,int days){
        int tot=1;
        int sum=0;
        for(int i=0;i<wei.size();i++){
            sum+=wei[i];
            if(wei[i]> mid) return 0;
            if(sum > mid){
                tot++;
                sum=wei[i];
            }
        }
        return tot<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int ans=0;
        long long low = 1,high=0;
        for(int i=0;i<n;i++){
            high+=weights[i];
        }
        while(low <= high){
            int mid = (low+high) >> 1;
            if(check(mid,weights,days)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};