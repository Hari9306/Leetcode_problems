class Solution {
public:
    bool check(int x ,vector<int> &arr2,int d){
        int low=0;
        int high=arr2.size()-1;
        while(low <= high){
            int mid=(low+high) >> 1;
            if(abs(arr2[mid]-x) > d){
                if (arr2[mid] < x) low = mid + 1;
                else high = mid - 1;
            }
            else if(abs(arr2[mid]-x) <=d) return false;
        }
        // if(abs(arr2[low]-x)<=d) return false;
        return true;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int cnt =0;
        for(auto x : arr1){
            if(check(x,arr2,d)) cnt++;
        }
        return cnt;
    }
};