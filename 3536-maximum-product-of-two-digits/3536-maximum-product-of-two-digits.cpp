class Solution {
public:
    int maxProduct(int n) {
        int max1=-1,max2=-1;
        while(n){
            int dig=n%10;
            if(dig>max1){
                max2=max1;
                max1=dig;
                
            }
            else if(dig>max2)
            max2=dig;
            n/=10;

        }
        return max1*max2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna