class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) return 1;
        int l=1;
        int r=1;
        int o;
        for(int i=2;i<=n;i++)
        {
            o=l+r;
            l=r;
            r=o;
        }
        return o;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna