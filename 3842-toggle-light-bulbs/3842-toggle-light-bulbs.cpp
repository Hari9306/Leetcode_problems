class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<bool> ans(101,false);
        int n =bulbs.size();
        for(int i=0;i<n;i++){
           if(ans[bulbs[i]]){
            ans[bulbs[i]] = 0;
           }
            else{ 
                ans[bulbs[i]] = 1;
            }
        }
        vector<int>res;
        for(int i = 1; i < 101; i++){
            if(ans[i])res.push_back(i);
        }
        return res;
    }
};