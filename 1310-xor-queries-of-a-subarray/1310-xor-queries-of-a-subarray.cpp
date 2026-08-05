class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> pref(n+1,0);
        pref[0]=arr[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]^arr[i];
            cout<< pref[i]<<" ";
        }
        vector<int> ans;
        for(auto x  : queries){
            if(x[0]==0) ans.push_back(pref[x[1]]);
            else ans.push_back(pref[x[1]]^pref[x[0]-1]);
        }
        return ans;
    }
};
// 1 2 6 14 
// 2 ^ 1 