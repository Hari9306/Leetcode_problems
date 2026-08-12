class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        int last=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(nums[i] > last){
                int op = nums[i] /last;
                // cout<< op << " ";
                if(nums[i] % last) op++;
                // cout<< op << " " << nums[i] << " ";
                ans+= (op-1);
                last = (nums[i]) / op ;
                // cout<< ans << endl;
            }
            else{
                last=nums[i];
            }
        }
        return ans;
    }
}; 