class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>cmp;
        int n=profit.size();
        for(int i=0;i<n;i++){
            cmp.push_back({difficulty[i],profit[i]});
        }
        sort(cmp.begin(),cmp.end());
        sort(worker.begin(),worker.end());
        for(int i=1;i<n;i++){
            cmp[i].second=max(cmp[i].second,cmp[i-1].second);
        }
        int score=0;
        for(int i=0;i<worker.size();i++){
            int low =0;
            int high =n-1;
            int ans=0;
            while(low<=high){
                int mid=(low+high)>>1;
                if(cmp[mid].first<=worker[i]){
                    ans=cmp[mid].second;
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            score+=ans;
        }

        return score;
    }
};