class Solution {
public:
    int minimumLength(string s) {
        vector<int> freq(26,0);
        for(auto ch : s) freq[ch-'a']++;
        for(int i=0;i<26;i++){
            cout<<freq[i]<< " ";
            if(freq[i]>2){
                if(freq[i]%3==0 && freq[i]%2==1){
                    freq[i]=1;
                }
                else if(freq[i]%3==0 && freq[i]%2==0){
                    freq[i]=2;
                }
                else if(freq[i]%3==1 && freq[i]%2==1){
                    freq[i]=1;
                }
                else if(freq[i]%3==1 && freq[i]%2==0){
                    freq[i]=2;
                }
                else if(freq[i]%3==2 && freq[i]%2==0){
                    freq[i]=2;
                }
                else if(freq[i]%3==2 && freq[i]%2==1){
                    freq[i]=1;
                }
            }
        }
        cout<<endl;
        int ans=0;
        for(auto x : freq) {
            cout <<x<<" ";
            ans+=x;
        }
        return ans;
    }
};
