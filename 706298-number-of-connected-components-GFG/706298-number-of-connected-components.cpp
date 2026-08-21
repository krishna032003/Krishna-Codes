class Solution {
  public:
    void dfs(vector<vector<int>>& adj, vector<bool>& vis,int u){
        vis[u]=1;
        for(int v:adj[u]){
            if(!vis[v]){
                dfs(adj,vis,v);
            }
        }
    }
    int countConnected(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> vis(V,false);
        int ans=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                ans++;
                dfs(adj,vis,i);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna