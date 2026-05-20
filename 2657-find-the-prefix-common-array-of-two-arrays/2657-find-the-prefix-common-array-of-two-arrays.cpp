class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        map<int,int>mpp;
        vector<int>C;
        int cnt=0;
        for(int i=0;i<n;i++){
            mpp[A[i]]++;
            mpp[B[i]]++;
            if(mpp[A[i]]%2==0){
                cnt++;
            }
            if(mpp[B[i]]%2==0){
                cnt++;
            }
            if(A[i]==B[i]){
                cnt--;
            }
            C.push_back(cnt);
        }
        return C;
    }
};