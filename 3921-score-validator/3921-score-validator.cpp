class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
            int score=0,counter=0;
            int n=events.size();
            for(int i=0;i<n;i++){
                if(events[i]>="0"&& events[i]<="6"){
                    score+=stoi(events[i]);
                }
                else if(events[i]=="W"){
                    counter++;
                }
                else if(events[i]=="WD" || events[i]=="NB"){
                    score++;
                }
                if(counter==10){
                     break;
                }
            }    
        return {score,counter};
    }
};