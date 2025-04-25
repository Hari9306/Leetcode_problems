class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>v;
        for(int val:nums){
            v[val]++;
        }
        int ans1=0;
        int ans2=0;
        for(auto &[key,cnt]:v){
            if(cnt%2==0){
            ans1+=(cnt/2);
            }
            else if(cnt%2!=0&&cnt!=1){
               ans1+=(cnt-1)/2;
               ans2++;
            }
            else{
                ans2++;
            }
        }
        return {ans1,ans2};
    }
};