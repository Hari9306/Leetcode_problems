class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int a=edges[0][0];
        int b=edges[0][1];
        if(a==edges[1][0]) return a;
        if(b==edges[1][0]) return b;
        return edges[1][1];
    }
};