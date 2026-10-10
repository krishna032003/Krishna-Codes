#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n=cost.size();
        vector<int> dp(n+1,INT_MAX/2); 
        dp[0]=0;
        for(int i=0;i<n;i++){
            int wallsCovered=time[i]+1;
            int currentCost=cost[i];
            for (int w=n;w>0;w--) {
                dp[w]=min(dp[w]/*skip*/,currentCost+dp[max(0,w-wallsCovered)]/*paint*/);
            }
        }
        return dp[n];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna