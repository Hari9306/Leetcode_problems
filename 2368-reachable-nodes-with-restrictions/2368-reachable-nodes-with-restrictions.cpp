class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<vector<int>> Adj(n);
        for(auto x : edges){
            Adj[x[0]].push_back(x[1]);
            Adj[x[1]].push_back(x[0]);
        }
        vector<bool> block(n,false);
        for(auto x : restricted){
            block[x]=true;
        }
        vector<bool> vis(n,false);
        queue<int>q;
        q.push(0);
        vis[0]=true;
        int cnt=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            cnt++;
            for(auto x : Adj[node]){
                if(!vis[x] && !block[x]){
                    vis[x]=true;
                    q.push(x);
                }
            }
        }
        return cnt;
    }
};