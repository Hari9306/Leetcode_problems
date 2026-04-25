class Solution {
public:
    int peak(vector<int> &nums,int n){
        int low=0;
        int high=n-1;
        while(low<high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid+1]){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
    int compareBitonicSums(vector<int>& nums) {
        int n=nums.size();
        int idx=peak(nums,n);
        long long left_sum=0;
        long long right_sum=0;
        for(int i=0;i<=idx;i++){
            left_sum+=nums[i];
        }
        for(int i=idx;i<n;i++){
            right_sum+=nums[i];
        }
        if(left_sum > right_sum) return 0;
        else if(right_sum > left_sum) return 1;
        return -1;
    }
};