class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int cnt=0;
        for(auto &it : mpp){

            if(k==0){
                if(it.second>1){
                    cnt++;
                }
            }
            else{
                if(mpp.find(it.first+k)!=mpp.end()){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};