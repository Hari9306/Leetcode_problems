class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> pref(1001,0);
        for(auto it : trips){
            pref[it[1]]+=it[0];
            pref[it[2]]-=it[0];
        }
        int cur_pref=0;
        for(auto it : pref){
            cur_pref+=it;
            if(cur_pref > capacity) return false;
        }
        return true;
    }
};