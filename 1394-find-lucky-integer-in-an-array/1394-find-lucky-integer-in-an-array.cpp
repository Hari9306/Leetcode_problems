class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(auto i: arr){
            mpp[i]++;
        }
        int a=-1;
        for(auto i:mpp){
            if(i.first==i.second){
              a=max(a,i.first);
            }
        }
        return a;
    }
};