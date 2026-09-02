class Solution {
public:
    int GCD(int a,int b){
        if(b==0) return a;
        return GCD(b,a%b);
    }
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int gcd_val=0,one=0;
        for(auto x : nums){
            if(x==1) one++;
            gcd_val=GCD(gcd_val,x);
        }
        if(gcd_val > 1) return -1;
        if(one > 0) return n-one;
        int size=INT_MAX;
        for(int i=0;i<n;i++){
            int val=0;
            for(int j=i;j<n;j++){
                val=GCD(val,nums[j]);
                if(val==1){
                    size=min(size,j-i+1);
                    break;
                }
            }
        }
        return size+n-2;
    }
};