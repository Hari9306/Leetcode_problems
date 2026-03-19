class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0"){
            return "0";
        }
        int n=num1.size();
        int m=num2.size();
        vector<int>res(n+m,0);
        for(int i=n-1;i>=0;i--){
            int dig1=num1[i]-'0';
            for(int j=m-1;j>=0;j--){
                int dig2=num2[j]-'0';
                int ans=dig1*dig2;
                ans+=res[i+j+1];
                res[i+j+1]= ans%10;
                res[i+j]+=ans/10;
            }
        }
        string temp="";
        int k=0;
        while(k<res.size() && res[k]==0) k++;
        while(k<res.size()){
            temp+=char(res[k]+'0');
            k++;
        }
        return temp;
    }
};