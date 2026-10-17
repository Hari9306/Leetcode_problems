class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> arr={a,b,c};
        sort(arr.begin(),arr.end());
        vector<int> ans(2,0);
        int l=arr[1]-arr[0];
        int r=arr[2]-arr[1];
        if(l==1 && r==1) return ans;
        if(l<=2 || r<=2)ans[0]=1;
        else ans[0]=2;
        ans[1]=l+r-2;
        return ans;
    }
};