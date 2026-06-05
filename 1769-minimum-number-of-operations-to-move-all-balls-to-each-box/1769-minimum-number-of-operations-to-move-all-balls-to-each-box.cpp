class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>pref(n,0);
        for(int i=0;i<n;i++){
            if(boxes[i]=='1'){
                int idx=i+1;
                for(int j=0;j<i;j++){
                    pref[j]+=abs(idx-(j+1));
                }
                if(idx<n){
                    for(int j=i+1;j<n;j++){
                        pref[j]+=abs(idx-(j+1));
                    }
                }
            }
        }
        return pref;
    }
};