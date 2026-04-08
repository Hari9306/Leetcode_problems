class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int MOD=1e9+7;
        for(auto it : queries){
            int li=it[0], ri=it[1] ,ki=it[2], vi=it[3];
            for(int i=li;i <= ri ;i+=ki){
                nums[i]=(1LL * nums[i] *vi) %MOD;
            }
        }
        int res=0;
        for(int i=0;i<nums.size();i++){
            res^=nums[i];
        }
        return res;
    }
};