class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n=plants.size();
        int ans=0;
        int org=capacity;
        for(int i=0;i<n;i++){
            if(plants[i]<=capacity){
                ans++;
                capacity-=plants[i];
                cout<< ans << " "<< capacity<<" ";
            }
            else {
                ans+=2 * i;
                capacity=org;
                ans++;
                capacity-=plants[i];
                cout<< ans <<   " " <<  capacity<<" ";
            }
        }
        return ans;
    }
};