class Solution {
public:
    string mergeCharacters(string s, int k) {
        while(1){
            int n =s.size();
            bool flag=false;
            int l=-1,rig=-1;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(s[i]==s[j] && j-i <= k){
                        l=i;
                        rig=j;
                        flag=true;
                        break;
                    }
                }
                if(flag) break;
            }
            if(!flag) break;
            s.erase(s.begin()+rig);
        }
        return s;
    }
};