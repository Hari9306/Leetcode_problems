class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int a,b;
        for(auto i:tokens){
            if(i!="+"&&i!="-"&&i!="/"&&i!="*"){
                st.push(stoi(i));
            }
            else{
                 a=st.top();
                st.pop();
                 b=st.top();
                st.pop();
                if(i=="+")st.push(a+b);
                else if(i=="-") st.push(b-a);
                else if(i=="/")st.push(b/a);
                else if(i=="*")st.push(a*b);
            }
        }
        return st.top();
    }
};