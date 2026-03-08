class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n=capacity.size();
        int idx=-1;
        int min_cap=INT_MAX;
        for(int i=0;i<n;i++){
            if(capacity[i] >=itemSize ){
                if(capacity[i]<min_cap){
                    min_cap=capacity[i];
                    idx=i;
                }
            }
        }
        return idx;
    }
};