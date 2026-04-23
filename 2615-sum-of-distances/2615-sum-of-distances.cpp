class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        map<int,vector<int>>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]].push_back(i);
        }   
        vector<long long>ans(n,0);
        for(auto it : mpp){
            vector<int> v=it.second;
            int len=v.size();
            vector<long long >pref(len,0);
            pref[0]=v[0];
            for(int i=1;i<len;i++){
                pref[i]=pref[i-1]+v[i];
            }
            for(int i=0;i<len;i++){
                long long sum=0;
                if(i > 0){
                    sum+= 1LL * i*v[i]-pref[i-1];
                }
                if(i < len-1){
                    sum+=(pref[len-1]-pref[i]) - 1LL *(len-i-1)*v[i];
                }
                ans[v[i]]=sum;
            }
        }
        return ans;
    }
};