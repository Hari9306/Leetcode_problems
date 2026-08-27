class Solution {
public:
    void bfs(int node,vector<bool> & vis,vector<vector<int>>& isConnected){
        queue<int> q;
        q.push(node);
        vis[node]=1;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            for(int i=0;i<isConnected[curr].size();i++){
                if(isConnected[curr][i] && !vis[i]){
                    q.push(i);
                    vis[i]=1;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int total=0;
        vector<bool> vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                total++;
                bfs(i,vis,isConnected);
            }
        }
        return total;
    }
};