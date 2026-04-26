class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
      int n=nums.size();
      if(n==1) return nums;
      vector<int>left(n) , right(n);
      left[0]=nums[0];
      for(int i=1;i<n;i++){
        left[i]=max(nums[i],left[i-1]);
      }
      right[n-1]=nums[n-1];
      for(int i=n-2;i>=0;i--){
        right[i]=max(nums[i],right[i+1]);
      }
      vector<int>ans;
      for(int i=0;i<n;i++){
        if(i==0 || i==n-1){
            ans.push_back(nums[i]);
        }
        else if(nums[i] > left[i-1] || nums[i] >right[i+1]){
            ans.push_back(nums[i]);
        }
      }
      return ans;
    }
};