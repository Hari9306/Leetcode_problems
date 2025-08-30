class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int>freq;
        int min_freq=INT_MAX;
        int freq_dig=0;
            while(n!=0){
                int dig=n%10;
                freq[dig]++;
                n/=10;   
            }
            int ans=-1;
            for(auto &p:freq){
                if(p.second<min_freq||(p.second==min_freq&&p.first<ans)){
                    ans=p.first;
                    min_freq=p.second;
                }
            }
            return ans;
    }
};