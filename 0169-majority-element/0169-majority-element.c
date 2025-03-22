 void Merge(int A[],int start,int mid,int end,int n){
    int i=start;
    int j=mid+1;
    int B[end-start+1];
    int k=0;
    while(i<=mid &&j<=end){
        if(A[i]<A[j]){
            B[k++]=A[i++];
        }
        else{
            B[k++]=A[j++];
        }
    }
    while(i <= mid) B[k++]=A[i++];
    while(j <= end) B[k++]=A[j++];
    k=0;
    for(int i = start; i <= end ;i++){
        A[i]=B[k++];
    }
}
void MergeSort(int A[],int n,int start,int end){
    if(start >= end)return;
    int mid = ( start + end) /2;
    MergeSort(A,n,start,mid);
    MergeSort(A,n,mid+1,end);
    Merge(A,start,mid,end,n);
    
}
int majorityElement(int* nums, int numsSize) {
    int n=numsSize;
  MergeSort(nums,n,0,n-1);
  return nums[n/2];

}