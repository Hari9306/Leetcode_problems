class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> vis(n,false);
        queue<int> q;
        q.push(0);
        vis[0]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int x : rooms[node]){
                if(!vis[x]) {
                    vis[x]=true;
                    q.push(x);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i]) return false;
        }
        return true;
    }
};