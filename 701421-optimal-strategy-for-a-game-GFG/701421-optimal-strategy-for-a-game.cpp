class Solution {
  public:
    int solve(vector<int>& arr,int i,int j,vector<vector<int>> &dp){
        if(i>j)
        return 0;
        if(i==j)
        return arr[i];
        if(dp[i][j]!=-1)
        return dp[i][j];
        int take_i=arr[i]+min(solve(arr,i+2,j,dp),solve(arr,i+1,j-1,dp));
        int take_j=arr[j]+min(solve(arr,i+1,j-1,dp),solve(arr,i,j-2,dp));
        return dp[i][j]=max(take_i,take_j);
    }
    int maximumAmount(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return solve(arr,0,n-1,dp);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna