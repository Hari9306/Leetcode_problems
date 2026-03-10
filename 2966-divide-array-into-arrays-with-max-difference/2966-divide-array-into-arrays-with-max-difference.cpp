class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int j=0;
        bool flag=true;
        for(int i=0;i<(n/3);i++){
            vector<int>res;
          for(int k=0;k<3;k++){
            res.push_back(nums[j]);
            j++;
          }
          if((res[1]-res[0]) <=k && (res[2]-res[1]) <=k && (res[2]-res[0]) <=k){
            flag=true;
          }
          else {
            flag=false;
            break;
          }
          ans.push_back(res);
        }
        if(!flag) return {};
        return ans;
    }
};