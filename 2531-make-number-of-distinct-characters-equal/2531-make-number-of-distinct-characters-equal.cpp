class Solution {
public:
    void insert(unordered_map<char,int>& mp ,char ins,char rem){
        mp[ins]++;
        mp[rem]--;
        if(mp[rem]==0) mp.erase(rem);
    }
    bool isItPossible(string word1, string word2) {
        unordered_map<char,int>mpp , mpp1;
        for(char c:word1) mpp[c]++;
        for(char c:word2) mpp1[c]++;
        for(char ch ='a'; ch<='z'; ch++){
            for(char ch1='a'; ch1<='z'; ch1++){
                if(!mpp.count(ch) || !mpp1.count(ch1)) continue;
                insert(mpp,ch1,ch);
                insert(mpp1,ch,ch1);
                if(mpp.size()==mpp1.size())
                    return true;
                insert(mpp,ch,ch1);
                insert(mpp1,ch1,ch);
            }
        }
        return false;
    }
};