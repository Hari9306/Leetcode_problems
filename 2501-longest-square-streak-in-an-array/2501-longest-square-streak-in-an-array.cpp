class Solution {
public:
    int GetNext(vector<int>& nums,int i){
        if(nums[i] >=1000) return nums.size();
        int low=i+1;
        int high=nums.size()-1;
        int key=nums[i]*nums[i];
        while(low <= high){
            int mid=(low+high) >> 1;
            if(nums[mid]==key) return mid;
            else if (nums[mid] < key) low=mid+1;
            else high=mid-1;
        }
        return nums.size();
    }
    int longestSquareStreak(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> Dp(n+1);
        int maxi=0;
        for(int i=n-1;i>=0;i--){
            Dp[i]=1+Dp[GetNext(nums,i)];
            maxi=max(maxi,Dp[i]);
        }
        return (maxi > 1) ? maxi : -1;

    }
};