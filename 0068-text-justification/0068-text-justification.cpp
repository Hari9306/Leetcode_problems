class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int n=words.size();
        vector<string> res;
        int i=0,j=0;
        string ans="";
        while(i < n){
            j=i;
            int pref=0;
            while( j < n &&pref+words[j].size()+(j-i)<= maxWidth){
                pref+=words[j].size();
                j++;
            }
            int space=maxWidth - pref;
            int gap=j-i-1;
            if(j==n) {
                for(int k=i;k<j;k++){
                    ans+=words[k];
                    if(k!=j-1) ans+=' ';
                }
                ans+=string(maxWidth -ans.size() , ' ');
            }
            else if(gap==0){
                ans+=words[i];
                ans+=string(space,' ');
            }
            else  {
                int rem=space/gap;
                int mod=space%gap;
                for(int k=i;k<j;k++){
                    ans+=words[k];
                    if(k!=j-1) ans+=string(rem,' ');
                    if(mod > 0) {
                        ans+=' ';
                        mod--;
                    }
                }
            }
            res.push_back(ans);
            ans="";
            i=j;
        }
        return res;
    }
};