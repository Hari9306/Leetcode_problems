class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       map<int,int>mpp;
       for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
       }
       for(auto it=mpp.rbegin();it!=mpp.rend();it++){
        if(k<=it->second){
            return it->first;
        }
        else{
            k-=it->second;
        }
       }
       return -1;
    }
};