class Solution {
public:
    int countSegments(string s) {
        int n=s.size();
        if(n==0) return 0;
        int i=0,cnt=0;
        while(i<n){
           if(s[i]!=' '){
                cnt++;
                while(i < n &&s[i]!=' ') i++; 
           } 
           i++;
        }
        return cnt;
    }
};