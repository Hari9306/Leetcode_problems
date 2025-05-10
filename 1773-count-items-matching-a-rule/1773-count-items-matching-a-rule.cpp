class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
         int k=0;
         if(ruleKey=="type"){
            k=0;
         }
         else if(ruleKey=="color"){
            k=1;
         }
         else{
            k=2;
         }
        int cnt=0;
        for(int i=0;i<items.size();i++){
           if(items[i][k]==ruleValue) cnt++;
        }
        return cnt;
    }
};