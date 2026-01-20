class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int k=nums[i];
            bool flag=true;
            for(int j=k/2;j<k;j++){
                if(k== 2) ans.push_back(-1);flag=false;
                if((j | (j+1))==k){
                    ans.push_back(j);
                    flag=false;
                    break;
                }
            }
            if(flag) ans.push_back(-1);
        }
        return ans;
    }
};
