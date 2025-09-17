class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
     vector<pair<int,int>>arr;
     for(int i=0;i<x.size();i++){
        arr.push_back({x[i],y[i]});
     }
     sort(arr.begin(),arr.end());
      vector<int> arr1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i].first != arr[i+1].first){
                arr1.push_back(arr[i].second);
            }
        }
        arr1.push_back(arr[arr.size()-1].second);
        if(arr1.size() < 3) return -1; 

        sort(arr1.begin(), arr1.end());
        int n = arr1.size();
        return arr1[n-1] + arr1[n-2] + arr1[n-3];
    }
};