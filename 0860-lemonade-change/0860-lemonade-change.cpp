class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int coin_5=0,coin_10=0;
     for(int i=0;i<bills.size();i++){
        if(bills[i]==5){
            coin_5++;
        }
        else if(bills[i]==10){
            coin_10++;
            coin_5--;
            if(coin_5<0){
                return 0;
            }
        }
        else{
            if (coin_10 > 0 && coin_5 > 0) {
                    coin_10--; 
                    coin_5--; 
                } 
                else if (coin_5 >= 3) {
                    coin_5 -= 3; 
                } 
                else {
                    return false; 
                }
        }
     }   
    
     return 1;
    }
};