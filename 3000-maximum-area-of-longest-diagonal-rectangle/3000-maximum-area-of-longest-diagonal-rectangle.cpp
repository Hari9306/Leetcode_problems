class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int max_area=0,max_dig=0;
        for(int i=0;i<dimensions.size();i++){
            int l=dimensions[i][0];
            int w=dimensions[i][1];
            int curr_dig=l*l+w*w;
            if(curr_dig>max_dig||(curr_dig==max_dig && l*w>max_area)){
                max_dig=curr_dig;
                max_area=l*w;
            }
        }
        return max_area;
    }
};