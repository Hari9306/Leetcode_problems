class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long  tot=0;
        for(int i=0;i<n;i++) tot+=nums[i];
        int Vcnt=0;
        long long lsum=0;
        for(int i=0;i<n-1;i++){
            lsum+=nums[i];
            tot-=nums[i];
            if(lsum >= tot) Vcnt++;
        }
        return Vcnt;
    }
};