class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.size();
        vector<int> cmp(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='('){
                st.push(i);
            }
            else if(ch==')'){
                if(!st.empty()) st.pop();
                else cmp[i]=1;
            }
        }
        while(!st.empty()){
            cmp[st.top()]=1;
            st.pop();
        }
        string res="";
        for(int i=0;i<n;i++) {
            if(!cmp[i]) res+=s[i];
        }
        return res;
    }
};