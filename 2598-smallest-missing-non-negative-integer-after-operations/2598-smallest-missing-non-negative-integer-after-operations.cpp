class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n=nums.size();
        vector<int>arr(n+1);
        for(int i=0;i<n;i++){
            int rem=((nums[i]%value)+value)%value;
            if(rem <n&&arr[rem]){
                int ele=value*arr[rem]+rem;
                if(ele<n){
                arr[ele]++;
                arr[rem]++;
                }
            }
            else if (rem<n){
                arr[rem]++;
            }
        }
        for(int i=0;i<=n;i++){
            if(arr[i]==0){
                return i;
            }
        }
        return n;
    }
};