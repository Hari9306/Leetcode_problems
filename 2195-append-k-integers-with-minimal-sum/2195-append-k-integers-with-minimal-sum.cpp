class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long sum=0;
        int cnt=0;
        int val=1;
        for(auto x : nums){
            if(x < val) continue;
            if(x==val){
                val++;
                continue;
            }
            else{
                while(x!=val && cnt<k){
                    sum+=val;
                    cnt++;
                    val++;
                }
                val++;
                if(cnt==k) return sum;
            }
        }
        while(cnt < k){
            sum+=val;
            val++;
            cnt++;
        }
        return sum;
    }
};