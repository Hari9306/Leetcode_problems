class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n2;i++){
            for(int j=i;j<n2;j++){
                if(nums2[j] > nums2[i]){
                    mpp[nums2[i]]=nums2[j];
                    break;
                }
            }
            if(!mpp[nums2[i]]){
                mpp[nums2[i]]=-1;
            }
        }
        vector<int> ans(n1);
        for(int i=0;i<n1;i++){
            ans[i]=mpp[nums1[i]];
        }
        return ans;
    }
};