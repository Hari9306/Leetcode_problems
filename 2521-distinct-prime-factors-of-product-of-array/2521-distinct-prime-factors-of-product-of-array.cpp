class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> st;
        vector<bool> prime(1e4+1,true);
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i*i<=1e4;i++){
            if(prime[i]){
                for(int j=i*i;j<=1e4;j+=i){
                    prime[j]=false;
                }
            }
        }
        // for(auto x : prime) cout<< x << " ";
        for(auto x : nums){
            int temp=x;
            for(int i=2;i*i<=temp;i++){
                if(prime[i]){
                    while(x%i==0){
                        x=x/i;
                        st.insert(i);
                    }
                }
            }
            if(x > 1) st.insert(x);
        }   
        // for(auto x : st) cout<<x << " ";
        return st.size();
    }
};