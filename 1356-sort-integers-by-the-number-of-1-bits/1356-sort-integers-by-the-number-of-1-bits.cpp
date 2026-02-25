class Solution {
public:
    int Getbit(int n){
        int cnt=0;
        while(n>0){
            if(n & 1) cnt++;
            n>>=1;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
       vector<pair<int,int>>A;
       int n=arr.size();
       for(int i=0;i<n;i++){
        A.push_back({Getbit(arr[i]),arr[i]});
       }
       sort(A.begin(),A.end());
       for(int i=0;i<n;i++){
        arr[i]=A[i].second;
       }
       return arr;
    }
};