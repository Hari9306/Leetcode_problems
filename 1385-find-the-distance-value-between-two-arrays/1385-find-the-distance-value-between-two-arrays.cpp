class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n=arr1.size();
        int m=arr2.size();
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end(),greater<int>());
        int cnt=0;
        for(int i=n-1;i>=0;i--){
            int flag=true;
            for(int j=0;j<m;j++){
                if(abs(arr1[i]-arr2[j]) <= d){
                    flag=false;
                    break;
                }
            }
            if(flag) cnt++;
        }
        return cnt;
    }
};