class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++){
            if(i%2!=0){
                odd.push_back(nums[i]);
            }
            else{
                even.push_back(nums[i]);
            }
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end());
        int index_odd=0;
        int index_even=0;
        for(int i=0;i<nums.size();i++){
            if(i%2!=0){
                nums[i]=odd[index_odd++];
            }
            else{
                nums[i]=even[index_even++];
            }
        }
        return nums;
    }
};