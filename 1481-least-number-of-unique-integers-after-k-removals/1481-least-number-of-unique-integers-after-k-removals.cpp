class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> mpp;
        for(auto it : arr){
            mpp[it]++;
        }
        vector<pair<int,int>> rem;
        for(auto it : mpp){
            rem.push_back({it.second,it.first});
        }
        sort(rem.begin(),rem.end());
        int cnt=0;
        int fcnt=0;
        for(auto x : rem){
            if(fcnt + x.first <= k){
                fcnt+=x.first;
                cnt++;
            }
            else{
                break;
            }
        }
        return rem.size()-cnt;
    }
};