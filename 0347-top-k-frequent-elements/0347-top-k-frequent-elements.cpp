class Solution {
public:
    static  bool cmp(pair<int,int> &a, pair<int,int> &b){
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>>vec(mpp.begin(),mpp.end());
        sort(vec.begin(),vec.end(),cmp);
        for(int i=0;i<k;i++){
            res.push_back(vec[i].first);
        }
    return res;
    }
};