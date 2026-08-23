class Solution {
  public:
    void dfs(vector<vector<int>>& adj,vector<bool>& vis,stack<int>& st,int u){
        vis[u]=1;
        for(int v:adj[u]){
            if(!vis[v])
            dfs(adj,vis,st,v);
        }
        st.push(u);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        vector<bool> vis(V);
        stack<int> st;
        for(int i=0;i<V;i++){
            if(!vis[i])
                dfs(adj,vis,st,i);
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna