class Solution {
public:
    void check(int n,vector<int> &prime){
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i*i <=n;i++){
            if(prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=false;
                }
            }
        }
    }
    int smallestValue(int n) {
        vector<int> prime(1e5+1,true);
        check(1e5,prime);
        int sum=0;
        while(true){
            int temp=n;
            for(int i=2;i*i<=temp && n > 1 ;i++){
                if(prime[i]){
                    while(n%i==0){
                        sum+=i;
                        n=n/i;
                    }
                }
                // cout<< sum << n << " ";
            }
            // cout<< sum <<n << " ";
            if(n >1 ) sum+=n;
            if(sum==temp) return temp;
            else{
                n=sum;
                sum=0;
            }
        }
        return n;
    }
};