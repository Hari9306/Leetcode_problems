class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int val1,val2;
        int ans=0;
        for(auto x : operations){
            if(x=="C"){
                st.pop();
            }
            else if(x=="D"){
                st.push(2*st.top());
            }
            else if(x=="+"){
                int val1=st.top();
                st.pop();
                int val2=st.top();
                st.push(val1);
                st.push(val1+val2);
            }
            else{
                st.push(stoi(x));
            }
        }   

        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};