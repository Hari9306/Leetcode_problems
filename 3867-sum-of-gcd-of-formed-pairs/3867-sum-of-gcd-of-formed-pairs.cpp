class Solution {
public:
    long long gcd(int a ,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    long long gcdSum(vector<int>& nums) {
        int n =nums.size();
        long long maxi=LLONG_MIN;
        vector<long long> pref(n);
        for(int i=0;i<n;i++){
            maxi=max(maxi,(long long)nums[i]);
            pref[i]=gcd(maxi,nums[i]);
        }
        sort(pref.begin(),pref.end());
        int l=0,r=n-1;
        long long ans=0;
        while(l < r){
            ans+=gcd(pref[l],pref[r]);
            l++;
            r--;
        }
        return ans;
    }
};