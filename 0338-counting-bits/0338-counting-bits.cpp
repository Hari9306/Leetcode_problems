class Solution {
public:
    int count(int k){
        int cnt=0;
        while(k!=0){
            k=k&(k-1);
            cnt++;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
       vector<int>ans;
       for(int i=0;i<=n;i++){
        ans.push_back(count(i));
       }
       return ans;
    }
};