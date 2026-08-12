class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        int i=1;
        st.push(nums[0]);
        while(i < n ){
            if(!st.empty() && nums[i] >= st.top()){
                st.push(nums[i]);
            }
            i++;
        }
        return st.size();
        
    }
};