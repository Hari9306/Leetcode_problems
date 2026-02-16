class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        while(i>=0&&j>=0){
            int  sum=(a[i]-'0')+(b[j]-'0')+carry;
            carry=sum/2;
            res+=char('0'+(sum%2));
            i--;
            j--;
        }
        while(i>=0){
             int sum =(a[i] - '0')+carry;
            carry =sum / 2;
            res +=char('0' + (sum % 2));
            i--; 
        }
        while (j>= 0) {
            int sum= (b[j]-'0')+carry;
            carry=sum/2;
            res+=char('0' + (sum % 2));
            j--;
        }
        if(carry) res+='1';
        reverse(res.begin(),res.end());
        return res;
    }
};