class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
    map<int,int>mpp;
     for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
     }
     int max_len=0;
     int cnt=0;
     for(auto it:mpp){
        if(mpp[it.first - 1]){ // 4
            cnt++; //3
            max_len=max(max_len,cnt); // 4
        }
        else{
            cnt = 1;
        }
     }
     max_len=max(max_len,cnt);
     return max_len;
    }
};