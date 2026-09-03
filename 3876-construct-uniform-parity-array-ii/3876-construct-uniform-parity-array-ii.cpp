class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        bool flag=true;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i] & 1 ){
                flag=false;
                break;
            }
        }
        if(flag) return true;
        if(nums1[0]&1) return true;
        return false;
    }
};