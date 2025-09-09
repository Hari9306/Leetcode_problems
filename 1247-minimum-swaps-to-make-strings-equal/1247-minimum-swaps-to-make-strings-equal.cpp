class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int i=0;
        int cnt=0,o=0;
        while(i<s1.size()){
            if(s1[i]==s2[i]){
                continue;
            }
            else if(s1[i]=='x' && s2[i]=='y'){
                cnt++;
            }
            else if(s1[i]=='y'&& s2[i]=='x'){
                o++;
            }
            i++;
        }
         int res=cnt/2+o/2;
         if(cnt%2!=0 &&o%2!=0){
            res+=2;
         }
         else if ((cnt%2!=0&&o%2==0)||(cnt%2==0&&o%2!=0)){
            return -1;
         }
         return res;
    }
};