class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        int n=values.size();
        vector<pair<int,int>> cmp;
        for(int i=0;i<n;i++){
            cmp.push_back({values[i],labels[i]});
        }
        sort(cmp.begin(),cmp.end(),greater<pair<int,int>>());
        unordered_map<int,int>mpp;
        int score=0;
        int wcnt=0;
        for(auto it : cmp){
            if(mpp[it.second]<useLimit && wcnt <numWanted){
            score+=it.first;
            mpp[it.second]++;
            wcnt++;
            }
            else if(wcnt > numWanted){
                break;
            }
        }
        return score;
    }
};