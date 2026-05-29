class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        vector<bool> prime(101,true);
        prime[0]=prime[1]=false;
        for(int i=2;i*i<=100;i++){
            if(prime[i]){
                for(int j=i*i;j<=100;j+=i){
                    prime[j]=false;
                }
            }
        }
        int f_idx=-1;
        int s_idx=-1;
        for(int i=0;i<nums.size();i++){
            if(prime[nums[i]]){
                f_idx=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(prime[nums[i]]){
                s_idx=i;
                break;
            }
        }
        return s_idx-f_idx;
    }
};