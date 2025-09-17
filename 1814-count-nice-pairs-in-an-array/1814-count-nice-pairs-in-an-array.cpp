class Solution {
public:
int rev(int n){
    int sum=0;
    while(n>0){
        int dig=n%10;
        sum=sum*10+dig;
        n=n/10;
    }
    return sum;
}
    int countNicePairs(vector<int>& nums) {
        int MOD= 1e9+7;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]-rev(nums[i]);
        }
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        long long  cnt=0;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            long long p=it->second;
             cnt = (cnt + (p * (p - 1) / 2) % MOD) % MOD;
        }
        return (int)cnt;
    }
};