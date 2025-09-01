class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
      if(hand.size()%groupSize !=0){
        return false;
        }
        sort(hand.begin(),hand.end());
        map<int,int>mpp;
        int n=hand.size();
        for(int i=0;i<n;i++){
            mpp[hand[i]]++;
        }
        for(auto it :hand){
            if(mpp[it]==0)
            continue;
            for(int i=0;i<groupSize;i++){
                if(mpp[it+i]==0){
                    return false;
                }
                mpp[it+i]--;
            }
        }
        return true;
    }
};