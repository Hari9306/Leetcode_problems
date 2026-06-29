class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int x=target[0];
        int y=target[1];
        int z=target[2];
        vector<bool> flag(3,false);
        for(int i=0;i<triplets.size();i++){
            if(triplets[i][0]<=x &&  triplets[i][1]<=y && triplets[i][2]<=z){
                if(triplets[i][0]==x) flag[0]=true;
                if(triplets[i][1]==y) flag[1]=true;
                if(triplets[i][2]==z) flag[2]=true;
            }
        }
        return flag[0] && flag[1] && flag[2];
    }
};