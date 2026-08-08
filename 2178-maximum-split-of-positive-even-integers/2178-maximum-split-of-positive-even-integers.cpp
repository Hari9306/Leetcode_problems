class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalsum) {
        if(finalsum&1) return {};
        vector<long long> ans;
        long long s=2;
        while(true){
            if(s <= finalsum){
                ans.push_back(s);
                finalsum-=s;
            }
            else{
                ans.back()=ans.back()+finalsum;
                break;
            }
            s+=2;
        }
        return ans;
    }
};    