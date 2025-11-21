class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res(2,0);
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(mpp[i]==0){
                res[1]=i;
            }
            if(mpp[i]==2){
                res[0]=i;
            }
        }
        return res;
    }
};