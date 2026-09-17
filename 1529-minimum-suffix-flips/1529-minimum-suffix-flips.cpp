class Solution {
public:
    int minFlips(string target) {
        int n=target.size();
        bool flag=false;
        int i=0;
        int cnt=0;
        while(i < n){
            if(target[i]=='1' && flag){
                while(i<n &&target[i]=='1'){
                    i++;
                }
                if(i<n)cnt++;
                flag = !flag;
            }
            else {
                while(i < n && target[i]=='0'){
                    i++;
                }
                if(i<n)cnt++;
                flag=!flag;
            }
        }
        return cnt;
    }
};