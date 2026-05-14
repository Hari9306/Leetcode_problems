class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }   
        for(auto it : mpp){
           if(it.first==n-1 && it.second==2){
                continue;
           }
           else if(it.first < n && it.second==1){
                continue;  
           }
           else{
                return false;
           }
        }
        return mpp.size()==n-1;
    }
};