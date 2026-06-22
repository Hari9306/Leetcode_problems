class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> st;
        int n=nums.size();
        for(auto x : nums) st.insert(x);
        map<int,int>mpp;
        int j=0;
        int ans=0;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
            while(mpp.size()==st.size()){
                ans+=n-i;
                mpp[nums[j]]--;
                if(mpp[nums[j]]==0){
                    mpp.erase(nums[j]);
                }
                j++;
            }
        }
        return ans;
    }
};