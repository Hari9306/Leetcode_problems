class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> pref(n,0);
        vector<int> suff(n,0);
        vector<int> ans(n);
        for(int i=1;i<n;i++){
            pref[i]+=nums[i-1]+pref[i-1];
            cout<<pref[i]<<" ";
        }
        cout<<endl;
        for(int i=n-2;i>=0;i--){
            suff[i]+=nums[i+1]+suff[i+1];
            cout<<suff[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            ans[i]=abs(pref[i]-suff[i]);
        }
        return ans;
    }
};