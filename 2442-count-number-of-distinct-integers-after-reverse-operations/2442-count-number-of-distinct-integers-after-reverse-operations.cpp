class Solution {
public:
int rev(int a){
    int rev=0;
    while(a>0){
        int dig=a%10;
        rev=rev*10+dig;
        a=a/10;
    }
    return rev;
}
    int countDistinctIntegers(vector<int>& nums) {
        set<int>st;
        st.insert(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int x=rev(nums[i]);
            if(st.count(x)){
                continue;
            }
            else st.insert(x);
        }
        return st.size();
    }
};