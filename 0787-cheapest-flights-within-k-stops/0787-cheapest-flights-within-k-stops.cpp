class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        int ans=-1;
        vector<int> dist(n,INT_MAX);
        dist[src]=0;
        for(int i=0;i<=k;i++){
            vector<int> temp=dist;
            for(auto flight:flights){
                int u=flight[0];
                int v=flight[1];
                int w=flight[2];

                if(dist[u]!=INT_MAX)
                    temp[v]=min(temp[v],dist[u]+w);
            }
            dist=temp;
        }
        return dist[dst]==INT_MAX?-1:dist[dst];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna