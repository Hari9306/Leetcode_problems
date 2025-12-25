class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<int>());
        int n=happiness.size();
        long long total=0;
        for(int i=0;i<k;i++){
            int curr=happiness[i]-i;
            if(curr<=0) break;
            total+=curr;
        }
        return total;
    }
};