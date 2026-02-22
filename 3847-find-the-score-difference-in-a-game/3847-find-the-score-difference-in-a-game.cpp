class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int n=nums.size();
        int first=0;
        int sec=0;
        bool flag=1,sflag=0;
        for(int i=0;i<n;i++){
            if(nums[i] & 1) swap(flag,sflag);
            if((i+1)%6 == 0) swap(flag,sflag);
            if(flag){
                first+=nums[i];
            }
            if(sflag) {
                sec+=nums[i];
            }
        }
        return first-sec;
    }
};