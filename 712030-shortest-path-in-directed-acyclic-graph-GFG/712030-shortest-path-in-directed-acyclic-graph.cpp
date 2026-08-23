class Solution {
  public:
    void topo(vector<vector<pair<int,int>>>& adj, vector<bool>& vis,int u,stack<int> &st){
        vis[u]=1;
        for(auto x:adj[u]){
            int v=x.first;
            if(!vis[v])
                topo(adj,vis,v,st);
        }
        st.push(u);
    }
    vector<int> shortestPath(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<pair<int,int>>> adj(V);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];
            adj[u].push_back({v,wt});
        }
        vector<bool> vis(V);
        vector<int> topsort(V);
        stack<int> st;
        for(int i=0;i<V;i++){
            if(!vis[i])
            topo(adj,vis,i,st);
        }
        vector<int> dist(V,INT_MAX);
        dist[0]=0;
        while(!st.empty()){
          int u=st.top();
          st.pop();
          if(dist[u]!=INT_MAX){
          for(auto x:adj[u]){
              int v=x.first;
              int wt=x.second;
              if(dist[v]>dist[u]+wt)
              dist[v]=dist[u]+wt;
              
          }
        }
        }
        for(int &d:dist){
            if(d==INT_MAX)
            d=-1;
        }
        return dist;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna