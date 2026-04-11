class Solution {
public:
    int minimumDistance(vector<int>& nums) {
         map<int,vector<int>>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]].push_back(i);
        }
        bool flag=false;
        int ans=INT_MAX;
        for(auto it : mpp){
            int len=it.second.size();
            if(len >=3){
                flag=true;
                for(int i=0;i<len-2;i++){
                    ans = min(ans, 2 * (it.second[i + 2] - it.second[i]));
                }
            }
        }
        if(flag){
            return ans;
        }
        return -1;
        
    }
};