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