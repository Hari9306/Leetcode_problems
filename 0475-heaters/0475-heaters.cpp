class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int i=0,j=0;
        int n=houses.size();
        int m=heaters.size();
        int ans=0;
         while (i < n) {
            while (j < m - 1 && abs(heaters[j+1] - houses[i]) <= abs(heaters[j] - houses[i])) {
                j++;
            }

            ans = max(ans, abs(heaters[j] - houses[i]));
            i++;
        }

        return ans;
    }
};