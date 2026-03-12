class Solution {
public:
    int minLengthAfterRemovals(string s) {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(!st.empty() && ((st.top()=='a' && s[i]=='b') ||(st.top()=='b' && s[i]=='a'))){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        return st.size();
    }
};