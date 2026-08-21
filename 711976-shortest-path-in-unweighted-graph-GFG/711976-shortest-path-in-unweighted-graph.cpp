class Solution {
  public:
    int shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
        // code here
        vector<vector<int>> adj(V);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>  dist(V,INT_MAX);
        dist[src]=0;
        queue<int> q;
        vector<bool> vis(V,0);
        q.push(src);
        vis[src]=1;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(int v:adj[u]){
                if(!vis[v]){
                    dist[v]=dist[u]+1;
                    vis[v]=1;
                    q.push(v);
                }
            }
        }
        return dist[dest]==INT_MAX?-1:dist[dest];
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna