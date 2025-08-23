class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
     map<int,int>mpp;
     vector<int>C;
     for(int i=0;i<A.size();i++){
        int sum=0;
        mpp[A[i]]++;
        mpp[B[i]]++;
        for(auto it:mpp){
            if((it.second%2)==0){
                sum+=(it.second/2);
            }
        }
        C.push_back(sum);
     }
     return C;
    }
};