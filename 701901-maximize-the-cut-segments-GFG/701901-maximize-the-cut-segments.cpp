class Solution {
  public:
    int maximizeCuts(int n, int a, int b, int c) {
        // code here
        vector<int> dp(n+1);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            dp[i]=-1;
            if(i-a>=0 && dp[i-a]!=-1) dp[i]=max(dp[i],dp[i-a]);
            if(i-b>=0 && dp[i-b]!=-1) dp[i]=max(dp[i],dp[i-b]);
            if(i-c>=0 && dp[i-c]!=-1) dp[i]=max(dp[i],dp[i-c]);
            if(dp[i]!=-1)
            dp[i]++;
        }
        return max(0,dp[n]);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna