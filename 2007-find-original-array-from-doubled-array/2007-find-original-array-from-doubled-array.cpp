class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        if(n%2==1) return {};
        map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[changed[i]]++;
        }
        vector<int>ans;
        for(auto it:freq){
            if(it.second==0) continue;
            if(freq[it.first*2]<it.second) return {};
                freq[it.first*2]-=it.second;
                if(it.first==0){
                for(int i=0;i<it.second/2;i++){
                ans.push_back(it.first);
                }
                }
                else{
                   for(int i=0;i<it.second;i++){
                ans.push_back(it.first);
                } 
                }
           }
           return ans;
    }
};