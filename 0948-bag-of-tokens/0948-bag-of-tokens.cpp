class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size()==0) return 0;
        sort(tokens.begin(),tokens.end());
        int i=0;
        int j=tokens.size()-1;
        int score=0;
        while(i<=j){
            if(tokens[i]<=power){
                power=power-tokens[i];
                score++;
                i++;
            }
            else if(score>0 && i<j) {
                power=power+tokens[j];
                score--;
                j--;
            }
            else {
                return score ;
            }
        }
        return score ;
    }
};