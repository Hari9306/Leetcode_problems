/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int *arr=(int*)malloc(numsSize*(sizeof(int)));
    *returnSize=numsSize;
    int lc=0,ec=0,gc=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<pivot)lc++;
        else if(nums[i]==pivot) ec++;
        else gc++;
    }
    int li=0,ei=lc,gi=lc+ec;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<pivot) arr[li++]=nums[i];
        else if(nums[i]==pivot) arr[ei++]=nums[i];
        else  arr[gi++]=nums[i];
    }
    return arr;

}