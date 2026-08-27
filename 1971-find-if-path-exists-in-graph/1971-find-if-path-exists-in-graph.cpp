class Solution {
public:
    bool dfs(int source,int destination,vector<vector<int>> &Adj,vector<bool> &vis){
        if(source==destination) return true;
        vis[source]=true;
        for(auto x : Adj[source]){
            if(!vis[x]) {
                if(dfs(x,destination,Adj,vis)) {
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        //dfs 
        vector<vector<int>> Adj(n);
        for(auto x : edges){
            Adj[x[0]].push_back(x[1]);
            Adj[x[1]].push_back(x[0]);
        }
        vector<bool> vis(n,false);
        return dfs(source,destination,Adj,vis);


        //bfs
        // vector<vector<int>> Adj(n);
        // for(auto x :edges){
        //     Adj[x[0]].push_back(x[1]);
        //     Adj[x[1]].push_back(x[0]);
        // }
        // vector<bool> vis(n,false);
        // queue<int> q;
        // q.push(source);
        // vis[source]=true;
        // while(!q.empty()){
        //     int node=q.front();
        //     q.pop();
        //     for(auto x : Adj[node]){
        //         if(!vis[x]){
        //             if(x==destination) return true;
        //             vis[x]=true;
        //             q.push(x);
        //         }
        //     }
        // }
        // return false;




        //normal way 
        // vector<vector<int>> Adj(n);
        // for(auto x : edges){
        //     Adj[x[0]].push_back(x[1]);
        //     Adj[x[1]].push_back(x[0]);
        // }
        // for(auto x : Adj[source]){
        //     if(x==destination) return true;
        // }
        // return false;
    }
};