class Solution {
public:
    int minimumBuckets(string hamsters) {
        int n=hamsters.size();
        int cnt=0,i=0;
        while(i < n){
            if(hamsters[i]=='H'){
                if(i+1<n && hamsters[i+1]=='.'){
                    cnt++;
                    i+=3;
                }
                else if(i-1 >= 0 && hamsters[i-1]=='.'){
                    cnt++;
                    i++;
                }
                else{
                    return -1;
                }
            }
            else{
                i++;
            }
        }
        return cnt;
    }
};