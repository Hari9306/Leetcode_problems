class Solution {
public:
    int longestBeautifulSubstring(string word) {
        vector<char> a;
        vector<int> a1;
        int i=0;
        while(i<word.size()){
            int j=i;
            int cnt=0;
            while(j<word.size()){
                if(word[j]==word[i]){
                    cnt++;
                    j++;
                }
                else{
                    break;
                }
            }
            a.push_back(word[i]);
            a1.push_back(cnt);
            i=j;
        }
        if(a.size()<5){
            return 0;
        }
        int ans=0;
        for(int i=0;i<a.size()-4;i++){
            if(a[i]=='a' and a[i+1]=='e'&& a[i+2]=='i'&&a[i+3]=='o'&&a[i+4]=='u'){
                int cnt1=a1[i]+a1[i+1]+a1[i+2]+a1[i+3]+a1[i+4];
                if(cnt1>ans){
                    ans=cnt1;
                }
            }
        }
        return ans;
    }
};