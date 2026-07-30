class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int blocks=n/8;
        return (blocks*(blocks+1)*4)+(n%8)*(blocks+1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna