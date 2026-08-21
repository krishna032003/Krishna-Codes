class Solution {
  public:
    bool dfs(vector<vector<int>>& adj,int s,vector<bool>& vis, int parent){
        vis[s]=1;
        for(int u:adj[s]){
            if(!vis[u])
            {if(dfs(adj,u,vis,s))
            return true;}
            else if(u!=parent)
            return true;
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(adj,i,vis,-1))
                return true;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna