class Solution {
public:
    long long countCommas(long long n) {
        if(n<=999) return 0;
        long long commas=0;
        long long start=1000;
        while(start<=n){
            commas+=n-start+1;
            start*=1000;
        }
        return commas;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna