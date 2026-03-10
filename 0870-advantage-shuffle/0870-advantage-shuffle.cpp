class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        vector<pair<int,int>>v;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            v.push_back({nums2[i],i});
        }
        sort(v.begin(),v.end());
        vector<int>res(n);
        int left=0;
        int rig=n-1;
        for(int i=0;i<n ;i++){
                if(nums1[i] >v[left].first){
                    res[v[left].second]=nums1[i];
                    left++;
                }
                else{
                    res[v[rig].second]=nums1[i];
                    rig--;
                }
        }
        return res;
    }
};



