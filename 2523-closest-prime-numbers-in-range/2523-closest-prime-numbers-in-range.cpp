class Solution {
public:
    void sieve(vector<bool>& prime,int n){
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(prime[i])
                for(int j=i*i ;j<=n;j+=i) prime[j]=false;
        }
    }
    vector<int> closestPrimes(int left, int right) {
        vector<bool> prime(1e6+1,true);
        sieve(prime,1e6);
        int num1=-1;
        int num2=-1;
        int dis=INT_MAX;
        vector<int>ans(2,-1);
        for(int i=left;i<=right;i++){
            if(prime[i]){
                num1=num2;
                num2=i;
                if(num1!=-1 && dis > num2-num1){
                    dis=num2-num1;
                    ans[0]=num1;
                    ans[1]=num2;
                }
            }
        }
        return ans;
    }
};