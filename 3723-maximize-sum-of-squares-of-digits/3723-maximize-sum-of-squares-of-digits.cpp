class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string res="";
        while(sum >=9 ){
            res+='9';
            sum-=9;
        }
        if(sum) res+=char('0'+sum);
        while(res.size() < num){
            res+='0';
        }
        if(res.size()>num) return "";
        return res;
    }
};