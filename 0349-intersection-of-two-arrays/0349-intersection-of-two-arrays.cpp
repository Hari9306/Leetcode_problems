class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>inter;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                  inter.insert(nums1[i]);
                }
            }
        }
        return vector<int>(inter.begin(),inter.end());
    }
};