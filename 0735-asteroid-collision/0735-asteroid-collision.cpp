class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int> st;
        vector<int>ans;
        for(auto x : asteroids){
            if(x > 0){
                st.push(x);
            }
            else{
                while(!st.empty() && st.top() > 0 && st.top()< -x ){
                    st.pop();
                }
                if(st.empty() || st.top() < 0){
                    st.push(x);
                }
                if(!st.empty() && st.top()==-x){
                    st.pop();
                }
            }
        }  
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};