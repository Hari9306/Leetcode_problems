class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>v;
        for(int val:nums){
            v[val]++;
        }
        int max_freq=0;
        for(auto &[key,count]:v){
            max_freq=max(max_freq,count);
        }
        int cnt=0;
        for(auto& [key,count]:v){
            if(count==max_freq){
                cnt+=count;
            }
        }
        return cnt;
    }
};