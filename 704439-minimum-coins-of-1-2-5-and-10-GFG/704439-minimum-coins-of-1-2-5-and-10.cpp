class Solution {
  public:
    int findMin(int n) {
        // code here
        vector<int> coins={10,5,2,1};
        int res=0;
        for(int i=0;i<4;i++){
            if(coins[i]<=n){
                int c=n/coins[i];
                res+=c;
                n-=c*coins[i];
            }
            if(n==0)
            break;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna