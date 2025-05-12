class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int>numsd;
        vector<int>freq(100000,0);
        for(int i=0;i<nums.size();i++){
             freq[nums[i]]++;
            if(freq[nums[i]]==2){
                numsd.insert(nums[i]);
            }
               
        }
        return vector<int>(numsd.begin(),numsd.end());
    }
};