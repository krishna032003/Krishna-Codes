class Solution {
  public:
    // int helper(vector<int>&arr,int n){
    //     if(n==1) return arr[0];
    //     else if(n==2) return max(arr[0],arr[1]);
    //     else return max(arr[n-1]+helper(arr,n-2),helper(arr,n-1));
    // }
    int findMaxSum(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(n==1)
        return arr[0];
        vector<int> dp(arr.size()+1,0);
        
        dp[1]=arr[0];
        dp[2]=max(arr[0],arr[1]);
        for(int i=3;i<=n;i++){
            dp[i]=max(dp[i-2]+arr[i-1],dp[i-1]);
        }
        return dp[n];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna