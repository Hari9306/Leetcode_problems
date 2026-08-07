class Solution {
public:
    int check(string &answerKey,int k,char ch){
        int max_len=0;
        int fcnt=0;
        int l=0;
        for(int i=0;i<answerKey.size();i++){
            if(answerKey[i]==ch) fcnt++;
            while(fcnt > k && l < answerKey.size()){
                if(answerKey[l]==ch) fcnt--;
                l++;
            } 
            max_len=max(max_len,i-l+1);
        }
        return max_len;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
      return max(check(answerKey,k,'T'),check(answerKey,k,'F'));
    }
};