class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;s[i]!=0;i++){
            int k=26-(s[i]-'a');
            int pos=i+1;
            sum+=pos*k;
        }
        
        return sum;
    }
};