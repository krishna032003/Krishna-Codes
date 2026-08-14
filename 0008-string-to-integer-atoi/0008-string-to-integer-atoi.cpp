class Solution {
public:
    int myAtoi(string s) {
        long long x=0; int i=0,sgn=1,n=s.size();
        while(i<n&&s[i]==' ')i++;
        if(i<n&&(s[i]=='-'||s[i]=='+'))sgn=s[i++]=='-'?-1:1;
        while(i<n&&isdigit(s[i])){
            x=x*10+s[i++]-'0';
            if(x*sgn>INT_MAX)return INT_MAX;
            if(x*sgn<INT_MIN)return INT_MIN;
        }
        return x*sgn;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna