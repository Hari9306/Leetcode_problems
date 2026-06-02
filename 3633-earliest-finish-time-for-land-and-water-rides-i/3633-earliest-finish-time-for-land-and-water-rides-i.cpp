class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n=landStartTime.size();
        int m=waterStartTime.size();
        int min_finish_Time=INT_MAX;
        for(int i=0;i<n;i++){
            int landstart=landStartTime[i];
            int landdur=landDuration[i];
            for(int j=0;j<m;j++){
                int waterstart=waterStartTime[j];
                int waterdur=waterDuration[j];
                int finishland=landstart+landdur;
                int startwater=max(waterstart,finishland);
                int totaltime=startwater+waterdur;
                min_finish_Time=min(min_finish_Time,totaltime);
            }
        }
        for(int j=0;j<m;j++){
            int waterstart=waterStartTime[j];
            int waterdur=waterDuration[j];
            for(int i=0;i<n;i++){
             int landstart=landStartTime[i];
             int landdur=landDuration[i];
                int finishwater=waterstart+waterdur;
                int startland=max(landstart,finishwater);
                int totaltime=startland+landdur;
                min_finish_Time=min(min_finish_Time,totaltime);
            }
        }
        return min_finish_Time;
    }
};