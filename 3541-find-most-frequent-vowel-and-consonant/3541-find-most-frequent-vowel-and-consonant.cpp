class Solution {
public:
    int maxFreqSum(string s) {
        vector<int>arr(26,0);
        int max1=0,max2=0;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='u'||s[i]=='o'){
                arr[s[i]-'a']++;
                    max1=max(arr[s[i]-'a'],max1);
            }
            else {
                arr[s[i]-'a']++;
             max2=max(arr[s[i]-'a'],max2);  
            }
        }
        return max1+max2;
    }
};