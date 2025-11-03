class Solution {
public:
    long long maxProduct(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        long long maxi= (long long)a[n-1]*(long long) a[n-2]*100000LL;
        maxi=max(maxi,(long long)a[0]*-100000LL*(long long)a[n-1]);
        maxi=max(maxi,(long long)a[0]*(long long)a[1]*100000LL);
        return maxi;
    }
};