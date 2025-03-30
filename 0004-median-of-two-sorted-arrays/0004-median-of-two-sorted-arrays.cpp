void Merge(vector<int>&A,int start,int mid,int end,int n){
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
void MergeSort(vector<int>&A,int n,int start,int end){
    if(start >= end)return;
    int mid = ( start + end) /2;
    MergeSort(A,n,start,mid);
    MergeSort(A,n,mid+1,end);
    Merge(A,start,mid,end,n); 
}
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        for(int i=0;i<nums1.size();i++){
            merge.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            merge.push_back(nums2[i]);
        }
        int k=merge.size();
        MergeSort(merge,k,0,k-1);
        double avg=0;
        if(k%2==0){
           avg=(merge[k/2]+merge[k/2-1])/2.0;
           return avg;
        }
        return merge[k/2];
    }
};