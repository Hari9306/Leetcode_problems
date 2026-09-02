class Solution {
public:
    long long GCD(long long a,long long b){
        if(b==0)return a;
        return GCD(b,a%b);
    }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        int n=nums.size();
        stack<long long> st;
        for(auto x : nums){
            while(!st.empty()){
                long long top = st.top();
                long long gcd_val=GCD(top,x);
                if(gcd_val > 1){
                    st.pop();
                    x=(1ll*top*x)/gcd_val;
                   }
                else{
                    break;
                }
            }
            st.push(x);
        }
        vector<int > ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};