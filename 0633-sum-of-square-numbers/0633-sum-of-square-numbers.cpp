class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l=0,r=sqrt(c);
        while(l<=r){
            if(((l*l)+(r*r))<c)
            l++;
            else if(((l*l)+(r*r))>c)
            r--;
            else
            return 1;
        }
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna