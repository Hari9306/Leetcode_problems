class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int k=0;
        vector<int> res(s.size());
        while(k < s.size()){
            int i=startPos[0];
            int j=startPos[1];
            int cnt=0;
            bool flag=false;
            for(int r=k;r<s.size();r++){
                if(s[r]=='R'){
                   j++; 
                }
                else if(s[r]=='U'){
                    i--;
                }
                else if(s[r]=='L'){
                    j--;
                }
                else if(s[r]=='D'){
                    i++;
                }
                if(i > n-1 ||  j > n-1 || i < 0 || j < 0){
                    res[k]=cnt;
                    flag=true;
                    break;
                }
                cnt++;
            }
            if(!flag) res[k]=cnt;
            k++;
        }   
        return res;
    }
};