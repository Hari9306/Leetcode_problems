class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            int len=1;
            int currsum=0;
            for(int j=i;j<arr.size();j++){
                currsum+=arr[j];
                if(len%2==1) sum+=currsum;
                len++;
            }
        }
        return sum;
    }
};