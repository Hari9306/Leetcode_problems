class Solution {
public:
  void merge(vector<int>&nums,int start,int mid,int end){
    int i=start;
    int j=mid+1;
    int B[end-start+1];
    int k=0;
    while(i<=mid&&j<=end){
        if(nums[i]<nums[j]){
            B[k++]=nums[i++];
        }
        else{
            B[k++]=nums[j++];
        }
    }
    while(i<=mid)B[k++]=nums[i++];
    while(j<=end)B[k++]=nums[j++];
    k=0;
    for(int i=start;i<=end;i++){
        nums[i]=B[k++];
    }
  }
  void mergesort(vector<int>&nums,int start,int end){
  if(start>=end)return ;
  int mid=(start+end)/2;
  mergesort(nums,start,mid);
  mergesort(nums,mid+1,end);
  merge(nums,start,mid,end);
  }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};