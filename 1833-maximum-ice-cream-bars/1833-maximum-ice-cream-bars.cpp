class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int cost=0,i=0,cnt=0;
        while(i < costs.size()){
            cost+=costs[i];
            if(cost <=coins){
                cnt++;
            }
            else {
                break;
            }
            i++;
        }
        return cnt;
    }
};