class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
         vector<int> sdigits;
         for(int i=1;i<=9;i++){
            int num=i;
            for(int j=i+1;j<=9;j++){
                num=num*10+j;
                if(num>=low && num <= high){
                    sdigits.push_back(num);
                }
            }
         }
         sort(sdigits.begin(),sdigits.end());
         return sdigits;

    }
};