class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>pairs;
        for(int i=0;i<spells.size();i++){
            long long start=0;
            long long  end=potions.size()-1;
            long long  ans=0;
            while(start<=end){
                long long  mid=start+(end-start)/2;
                long long cmp=(long long)potions[mid]*spells[i];
                if(cmp>=success){
                    ans=potions.size()-mid;
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            pairs.push_back(ans);
        }
        return pairs;
    }
};