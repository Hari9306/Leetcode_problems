class Solution {
public:
    long long bit(int x){
        long long ans=0;
        while(x>0){
            int bit=x&1;
            ans=(ans<<1)+bit;
            x>>=1;
        }
        return ans;
    } 
    vector<int> sortByReflection(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[&](int a , int b){
            long long ra=bit(a);
            long long rb=bit(b);
            if(ra < rb) return true;
            if(ra > rb) return false;
            return a < b ;
        }
        );
        return nums;
    }
};