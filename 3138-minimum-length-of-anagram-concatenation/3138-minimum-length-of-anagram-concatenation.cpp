class Solution {
public:
    int minAnagramLength(string s) {
        int n=s.size();
        vector<int> fact;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                if(n/i==i){
                    fact.push_back(i);
                }
                else {
                    fact.push_back(i);
                    fact.push_back(n/i);
                }
            }
        }
        sort(fact.begin(),fact.end());
        for(int i=0;i<fact.size();i++){
            int j=0;
            bool flag=true;
            vector<int> freq(26,0);
            while(j < fact[i]){
                freq[s[j]-'a']++;
                j++;
            }   
           
            while(j < n){
                vector<int> freq1(26,0);
                int end=j+fact[i];
                while(j < end){
                    freq1[s[j]-'a']++;
                    j++;
                }
                if(freq!=freq1) {
                    flag=false;
                    break;
                }
            }
            if(flag){
                return fact[i];
            }
        }
        return n;
    }
};