class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='('){
                st.push(i);
            }
            else if (ch==')'){
                reverse(s.begin()+st.top()+1,s.begin()+i);
                st.pop();
            }
        }        
        string res="";
        for(auto ch : s){
            if(ch!='(' && ch!=')'){
                res+=ch;
            }
        }
        return res;
    }
};

