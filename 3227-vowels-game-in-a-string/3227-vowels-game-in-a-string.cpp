class Solution {
public:
    bool doesAliceWin(string s) {
        int vow=0;
     for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u'){
            vow++;
        }
    }
    if(vow==0){
        return 0;
    }
    if(vow%2!=0){
        return 1;
    }
    return 1;
    }    
};