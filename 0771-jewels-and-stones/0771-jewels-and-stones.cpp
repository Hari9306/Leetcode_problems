class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int>a;
        for(int val:jewels){
            a[val-'a']++;
        }
        int cnt=0;
        for(int val1:stones){
            if(a.find(val1-'a')!=a.end()){
                cnt++;
            }
        }
        return cnt;
    }
};