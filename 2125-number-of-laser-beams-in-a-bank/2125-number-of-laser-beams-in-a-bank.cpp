class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev=0,res=0;
        for(int i=0;i<bank.size();i++){
            int sum=0;
            for(int j=0;j<bank[0].size();j++){
               if(bank[i][j]=='1'){
                sum++;
               }
            }
            if(sum){
                res+=sum*prev;
                prev=sum;
               }
        }
        return res;
    }
};