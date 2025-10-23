class Solution {
public:

    bool check(string k){
        char t=k[0];
        for(int i=1;i<k.size();i++){
            if(k[i]!=t){
                return false;
            }
        }
        return true;
    }
    bool hasSameDigits(string s) {
        int j=s.size()-2;
        while(j){
            int sum=0;
            int num=0;
            for(int i=0;i<s.size()-1;i++){
                int value1=(s[i]-'0'),value2=(s[i+1]-'0');
                int res=(value1+value2)%10;
                s[i]=res+'0';
            }
            s.pop_back();
            j--;
        }
      return check(s);
    }
};