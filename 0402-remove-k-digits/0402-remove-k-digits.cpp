class Solution {
public:
    string removeKdigits(string num, int k) {
       stack<int>st;
       for(auto it: num){
        while(k>0&& !st.empty()&&st.top()>it){
            st.pop();
            k--;
        }
        st.push(it);
       }
       while (k-- > 0 && !st.empty()) {
            st.pop();
        }
       string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        int i=0,n=res.size()-1;
        while(i<n&&res[i]=='0'){
            res.erase(res.begin());
        }
        return res.empty()? "0": res;
    }
};