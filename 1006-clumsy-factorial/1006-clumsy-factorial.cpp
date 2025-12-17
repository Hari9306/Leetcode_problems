class Solution {
public:
    int clumsy(int n) {
        stack<int> st;
        st.push(n--);
        int flag=1;
        while(n>0){
            if(flag==1){
                int x=st.top();
                st.pop();
                st.push(x*n);
                n--;
                flag++;
            }
            else if(flag==2){
                int x=st.top();
                st.pop();
                st.push(x/n);
                n--;
                flag++;
            }
            else if(flag==3){
                st.push(n);
                n--;
                flag++;
            }
            else {
                st.push(-n);
                n--;
                flag=1;
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};