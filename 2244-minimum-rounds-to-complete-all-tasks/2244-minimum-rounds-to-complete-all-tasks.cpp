class Solution {
public:
    int minimumRounds(vector<int>& nums) {
         map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int cnt=0;
        for(auto it:mpp){
            int n=it.second;
            if(n==1) return -1;
            if(n%3==0) cnt+=n/3;
            else if(n%3>=1) cnt+=(n/3)+1;
            else cnt+=(n/2);
        }
        return cnt;
    }
};