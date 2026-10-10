class Solution {
public:
    int t[501][501];
    int sol(vector<int>& cost, vector<int>& time,int i,int n){
        if(n<=0)
        return 0;
        if(i>=cost.size())
        return INT_MAX/2;
        if(t[i][n]!=-1)
        return t[i][n];
        int skip=sol(cost,time,i+1,n);
        int take=cost[i]+sol(cost,time,i+1,n-1-time[i]);
        return t[i][n]=min(skip,take);
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        
        memset(t,-1,sizeof(t));
        return sol(cost,time,0,cost.size());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna