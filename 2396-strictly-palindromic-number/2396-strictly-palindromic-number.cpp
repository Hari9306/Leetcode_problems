class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int c=n;
        int l,r;
        for(int i=2;i<=n-2;i++){
            vector<int>p;
            while(c>=1){
                p.push_back(c%i);
                c=c/i;
            }
            l=0;
            r=p.size()-1;
            while(l<r){
                if(p[l]!=p[r]){
                    return false;
                }
                l++;
                r--;
            }
            c=n;
        }
        return true;
    }
};