class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination) return true;
        vector<vector<int>> Adj(n);
        for(int i=0;i<edges.size();i++){
            Adj[edges[i][0]].push_back(edges[i][1]);
            Adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n,0);
        queue<int> q;
        q.push(source);
        vis[source]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it : Adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    if(it==destination) return true;
                    q.push(it);
                }
            }
        }
        return false;
    }
};