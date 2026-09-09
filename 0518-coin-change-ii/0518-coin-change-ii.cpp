class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<double> dp(amount+1,0);
        dp[0]=1;
        for(int x:coins){
            for(int i=x;i<=amount;i++) dp[i]+=dp[i-x];
        }
        return dp[amount];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna