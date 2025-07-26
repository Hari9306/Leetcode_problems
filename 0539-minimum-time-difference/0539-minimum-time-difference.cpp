class Solution {
public:
    int findMinDifference(vector<string>& timepoints) {
        vector<int> minu(timepoints.size());
        for(int i=0;i<timepoints.size();i++){
            int h=stoi(timepoints[i].substr(0,2));
            int m=stoi(timepoints[i].substr(3));
            minu[i]=h*60+m;
        }
        sort(minu.begin(), minu.end());
        int mindiff=INT_MAX;
        for(int i=0;i<minu.size()-1;++i){
            mindiff=min(mindiff,minu[i+1]-minu[i]);
        }
        mindiff=min(mindiff, 24*60-minu.back() + minu.front());
        return mindiff;
    }
};