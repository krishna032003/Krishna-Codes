class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int n1=w1.length(),n2=w2.length();
        string ans="";
        ans.reserve(w1.length() + w2.length());
        for(int i=0;i<max(n1,n2);i++){
            if(i<n1) ans+=w1[i];
            if(i<n2) ans+=w2[i];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna