class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int k=n/20;
        int cnt=0,sum=0;
        for(int i=k;i<n-k;i++){
            sum+=arr[i];
            cnt++;
        }
        double avg=(double)sum/cnt;
        return avg;
    }
};