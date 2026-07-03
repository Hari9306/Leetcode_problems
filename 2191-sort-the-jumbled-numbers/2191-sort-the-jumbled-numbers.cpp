class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>>JUM;
        for(int i=0;i<n;i++){
            int temp=nums[i];
            if(temp == 0){
                JUM.push_back({mapping[0], i});
                continue;
            }
            int num1=0;
            int p=1;
            while(temp > 0){
                int dig=temp%10;
                num1+=mapping[dig]*p;
                p*=10;
                temp/=10;
            }
            JUM.push_back({num1,i});
        }
        sort(JUM.begin(),JUM.end());
        // for(int i=0;i<n;i++){
        //     cout<< JUM[i].first<<JUM[i].second<<" ";
        // }
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[JUM[i].second]);
        }
        return ans;
    }
};