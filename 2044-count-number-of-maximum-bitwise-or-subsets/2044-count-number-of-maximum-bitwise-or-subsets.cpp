class Solution {
public:
 void getsub(vector<int>&nums,int idx,int n,int & cnt,int cur,int max_or){
    if(idx==n){
        if(max_or==cur) cnt++;
         return ;
    }
    //pick
     getsub(nums,idx+1,n,cnt,cur|nums[idx],max_or);
     //non pick
     getsub(nums,idx+1,n,cnt,cur,max_or);
 }
    int countMaxOrSubsets(vector<int>& nums){
        int n=nums.size();
        int max_or=nums[0];
        for(int i=1;i<n;i++){
        max_or|=nums[i];
        }
        int cnt=0;
        int cur=0;   
        getsub(nums,0,n,cnt,cur,max_or);
         return cnt;
    }
};