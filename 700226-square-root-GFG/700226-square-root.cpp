class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int lo=0,hi=n,ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            // Coaching: Your binary search logic is correct and achieves O(log N) time and O(1) space, which is optimal.
            // However, note that 'mid * mid' can cause integer overflow if 'mid' is large (e.g., > 46340).
            // To be safe, consider using 'long midsq = (long)mid * mid;' or the condition 'mid > n / mid'.
            long midsq=(long)mid*mid;
            if(midsq==n)
            return mid;
            else if(midsq>n){
                hi=mid-1;
            }
            else{
                lo=mid+1;
                ans=mid;
                
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna