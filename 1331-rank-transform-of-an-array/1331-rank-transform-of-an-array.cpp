class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
     vector<int> nums=arr;
     sort(nums.begin(),nums.end());
     unordered_map<int,int>mpp;
     int rank=1;
     for(int num : nums){
        if(mpp.find(num) == mpp.end()){
            mpp[num] =rank++;
        }
     }
     vector<int>ans;
     for(int x: arr){
        ans.push_back(mpp[x]);
     }
     return ans;
    }
};