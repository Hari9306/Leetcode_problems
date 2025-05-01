class Solution {
public:
    int longestContinuousSubstring(string s) {
        int i=0;
        int max=0;
      while(i<s.size()){
       int cnt=1;
      int j=i+1;
      while(j<s.size()){
        if((s[j]-'a')==((s[j-1]-'a')+1)){
            j++;
            cnt++;
        }
        else{
            break;
        }
      }
      i=j;
      if(max<cnt){
        max=cnt;
      }
      }
      return max;
    }
};