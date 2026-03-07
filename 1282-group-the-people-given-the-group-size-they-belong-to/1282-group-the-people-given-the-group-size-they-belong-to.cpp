class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>>mpp;
        for(int i=0;i<groupSizes.size();i++){
            mpp[groupSizes[i]].push_back(i);
        }
        vector<vector<int>>res;
        for(auto it: mpp){
            vector<int>ans;
            for(auto i:it.second){
                if(ans.size()==it.first){
                    res.push_back(ans);
                    ans.clear();
                }
                ans.push_back(i);
            }
             if(!ans.empty()){
                res.push_back(ans);
            }
        }
        return res;
    }
};