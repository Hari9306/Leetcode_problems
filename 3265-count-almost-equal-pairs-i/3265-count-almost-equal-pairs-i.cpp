class Solution {
public:
    bool cmp(int n,int x){
        int a[2],b[2];
        int cnt=0;
        while(n > 0 || x>0){
            if(n%10!=x%10 ) {
                if(cnt==2) return false;
                a[cnt] = n%10;
                b[cnt] = x%10;
                cnt++;
            }   
            n/=10;
            x/=10;
        }
        if(cnt ==0) return true;
        if(cnt==1) return false;
        return a[0]==b[1] && a[1]==b[0];
    }
    int countPairs(vector<int>& nums) {
       unordered_map<int,int> mpp;
        for(auto x : nums){
            mpp[x]++;
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]--;
            for(auto x : mpp){
                if(x.second > 0 && cmp(x.first,nums[i])){
                    ans+=x.second;
                }
            }
        }
        return ans;
    }
};