int even(int n){
    int x=0;
    while(n!=0){
        n/=10;
        x++;
    }
    if(x%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int findNumbers(int* nums, int numsSize) {
  int cnt=0;
  for(int i=0;i<numsSize;i++){
    if(even(nums[i])==1){
        cnt++;
    }
  }   
  return cnt;
}