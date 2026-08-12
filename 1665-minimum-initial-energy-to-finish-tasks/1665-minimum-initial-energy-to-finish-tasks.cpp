class Solution {
public:
    static bool cmp(vector<int> &a ,vector<int> &b){
        return (a[1]-a[0]) > (b[1]-b[0]);
    }
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(),tasks.end(),cmp);
        // for(vector<int> x : tasks) cout<< x[0] <<" "<< x[1] <<endl;
        int curr=0;
        int energy=0;
        for(auto x : tasks){
            int actual=x[0];
            int mini=x[1];
            if(curr < mini){
                energy+= (mini-curr);
                curr=mini;
            }
            curr-=actual;
        }
        return energy;
    }
};