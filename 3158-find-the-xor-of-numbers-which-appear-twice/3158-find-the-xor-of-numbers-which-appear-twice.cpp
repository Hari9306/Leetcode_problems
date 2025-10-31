class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
     map <int,int> mpp ;
     int xorr=0;
     for(auto it: nums ){
        mpp[it]++;
        if(mpp[it]==2){
            xorr^=it;
        }
     } 
     return xorr;  
    }
};