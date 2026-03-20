class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int n=num1.size();
        int m=num2.size();
        int i=0;
        while(i<n && num1[i] != '+'){
            i++;
        }
        int real1=stoi(num1.substr(0,i));
        int j=0;
        while(j<m && num2[j] != '+'){
            j++;
        }
        int real2=stoi(num2.substr(0,j));
        int k=i+1;
        while(k<n && num1[k]!='i'){
            k++;
        }
        int com1=stoi(num1.substr(i+1,k));
        int l=j+1;
        while(l<m && num2[l]!='i'){
            l++;
        }
        int com2=stoi(num2.substr(j+1,l));
        int real=(real1*real2)-(com1*com2);
        int com=(real1*com2)+(real2*com1);
        string res="";
        res+=to_string(real);
        res+='+';
        res+=to_string(com);
        res+='i';
        return res;
    }
};