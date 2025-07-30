class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>>res;
        for(int i=0;i<score.size();i++){
            res.push_back({score[i],i});
        }
        sort(res.begin(),res.end());
        vector<string>ans(score.size());
        int k=4;
        for(int i=res.size()-1;i>=0;i--){
            if(i==res.size()-1){
                ans[res[i].second]="Gold Medal";
            }
            else if(i==res.size()-2){
                ans[res[i].second]="Silver Medal";
            }
            else if(i==res.size()-3){
                ans[res[i].second]="Bronze Medal";
            }
            else {
                ans[res[i].second]=to_string(k);
                k++;
            }
        }
        return ans;
    }
};