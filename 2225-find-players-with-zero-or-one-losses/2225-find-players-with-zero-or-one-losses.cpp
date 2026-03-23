class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans;
        map<int,int>win;
        map<int,int>loss;
        for(int i=0;i<matches.size();i++){
            win[matches[i][0]]++;
            loss[matches[i][1]]++;
        }
        vector<int>winner;
        vector<int>losser;
        for(auto it : win){
            if(!loss.count(it.first)){
                winner.push_back(it.first);
            }
        }
        for(auto it : loss){
            if(it.second==1){
                losser.push_back(it.first);
            }
        }
        sort(winner.begin(),winner.end());
        sort(losser.begin(),losser.end());
        return {winner,losser};
    }
};