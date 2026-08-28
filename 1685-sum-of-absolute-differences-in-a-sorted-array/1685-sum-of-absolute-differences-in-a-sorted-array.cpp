class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int> pref(n),suff(n);
        pref[0]=nums[0];
        suff[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i];
            suff[n-i-1]=suff[n-i]+nums[n-i-1];
        }
        vector<int> res(n);
        for(int i=0;i<n;i++){
            res[i]=((nums[i]*i)-pref[i])+(suff[i]-(nums[i]*(n-i-1)));
        }
        return res;
    }
};
// 2 3 5 
// 2 5 10 -> prefix
//10 8  5 -> suffix 
// two cases 
// 1 -> |nums[0]-nums[i]| -> if(nums[i] > for the first elements ) then it becomes nums[i]-nums[0] .....
// 2 -> |nums[i]-nums[idx]| -> if nums[i] < nums[idx]-nums[i] ..... 