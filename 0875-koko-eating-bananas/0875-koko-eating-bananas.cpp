class Solution {
public:
    bool check(vector<int> &piles,int h,int mid){
        long long hour=0;
        for(auto x : piles){
                hour+=x/mid;
                if(x%mid!=0) hour++;
                if(hour > h) return false;
            }
        return hour <=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(begin(piles),end(piles));
        int ans=0;
        while(l <=r){
            int mid=(l+r) >>1;
            if(check(piles,h,mid)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};