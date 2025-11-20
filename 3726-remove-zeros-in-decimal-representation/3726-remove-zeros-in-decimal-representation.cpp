class Solution {
public:
    long long removeZeros(long long n) {
        long long temp = 0;
        vector<int> v;
        while(n>0){
            int dig=n%10;
            if(dig!=0){
             v.push_back(dig);
            }
            n/=10;
        }
        reverse(v.begin(),v.end());
        for(auto it : v ){
            temp=temp*10+it;
        }
        return temp ;
    }
};